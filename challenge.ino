void setup() {
  // デバック用シリアル通信は9600bps
  Serial.begin(115200);
  Serial.print("2");
  DCM_Init();			// DCモータを初期化
  DCM2_Init();		// DCモータ2を初期化
  Serial.println(F("Init done"));
  delay(300);
}

void loop() {

  Serial.print("1");
  go_Forward();
  delay(1000);
  go_Back();
  delay(1000);
  turn_Right();
  delay(1000);
  turn_Left();
  delay(1000);
  Serial.println(distance());

}
