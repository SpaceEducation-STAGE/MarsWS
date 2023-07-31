int TRIG = 4;
int ECHO = 5;

double duration = 0;
double distance = 0;
double speed_of_sound = 331.5 + 0.6 * 25; // 25℃の気温の想定

void setup() {
  Serial.begin( 115200 );

  pinMode(ECHO, INPUT );
  pinMode(TRIG, OUTPUT );
}

void loop() {
  digitalWrite(TRIG, LOW); 
  delayMicroseconds(2); 
  digitalWrite( TRIG, HIGH );
  delayMicroseconds( 10 ); 
  digitalWrite( TRIG, LOW );
  duration = pulseIn( ECHO, HIGH ); // 往復にかかった時間が返却される[マイクロ秒]

  if (duration > 0) {
    duration = duration / 2; // 往路にかかった時間
    distance = duration * speed_of_sound * 100 / 1000000;
    Serial.print("Distance:");
    Serial.print(distance);
    Serial.println(" cm");
  }

  delay(200);
}

void go_Forward(){
  DCM_FORWARD();
  DCM2_FORWARD();
  Serial.println(F("forward"));
}

void go_Back(){
  DCM_REVERSE();
  DCM2_REVERSE();
  Serial.println(F("back"));
}

void turn_Right(){
  DCM_FORWARD();
  DCM2_BRAKE();
  Serial.println(F("right"));
}

void turn_Left(){
  DCM_BRAKE();
  DCM2_FORWARD();
  Serial.println(F("left"));
}
