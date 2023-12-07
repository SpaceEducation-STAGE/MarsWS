<!-- README.md -->
# "火星のオアシスを探そう！" プログラミングマニュアル
北海道企画で宇宙教育プロジェクトSTAGEが行うWSで参加者に配布するマニュアルです。

## リンク
[GitHub](https://github.com/SpaceEducation-STAGE/MarsWS/blob/main)  

## 概要
+ 教育用缶サットを用いたワークショップ
+ 火星の居住可能地域をローバーを用いて探索するというストーリー。プログラミングを実際に手を動かしながら学び、最終的にはローバーをプログラミングにより動かしたり、ローバーの機体に工夫を凝らしたりして将来的に人類が移住できる可能性のある「火星のオアシス」を見つけ出す。

### 使用するセンサ
+ 超音波センサ
	- 機体の周囲にある物体を検知する 

## 資料一覧
+ [関数・用語一覧](f.md)
  
+ [CanSat搭載機器 一覧](./PartsList.md)
  
+ `./challenge` ：実際に書き換えるコード⚠️出来上がり次第更新
	- [Lv.1](./challenge/Lv.1.ino)

	void loop()内をのdelayやturn_Leftなどを組み合わせて目的地まで到達するプログラミングを作ろう！
 	- [Lv.2](./challenge/Lv.2.ino)
    
    	距離に関する関数を作り、実際にタイヤを回転させるための関数を作ってみよう！
  
	- [Lv.3](./challenge/Lv.3.ino)

	モーターを制御する仕組みを理解し、モーターを自由に動かすプログラミングを作ってみよう！

+ `./challenge/test`
	- 機器のテストコード（動作試験）⚠️テスト次第更新
		* [DCモーター](./challenge/DCmotor.ino)
		* [9軸センサ (IMU) の単体テスト (BMX055)](./Arduino/Test_IMU)
		* [9軸センサ (IMU) の単体テスト (Pololu MinIMU-9 v5)](./Arduino/Test_IMU_Pololu)
		* [高度計（気圧計）・温湿度計の単体テスト](./Arduino/Test_Barometer_Thermohygrometer)
		* [光センサの単体テスト](./Arduino/Test_Light)
		* [カメラの単体テスト](./Arduino/Test_Camera2)
		* [マイクの単体テスト](./Arduino/Test_Microphone)
		* [サーボモータの単体テスト](./Arduino/Test_Servo)
		* [DCモータの単体テスト](./Arduino/Test_DCMotor)
		* [SDカードの単体テスト](./Arduino/Test_SD)
		* [XBee（無線通信機）の単体テスト](./Arduino/Test_XBee)
