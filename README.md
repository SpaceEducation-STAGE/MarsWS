<!-- README.md -->
# "火星のオアシスを探そう！" プログラミングマニュアル
北海道企画で宇宙教育プロジェクトSTAGEが行うWSで参加者に配布するマニュアルです。

## リンク
[GitHub](https://github.com/SpaceEducation-STAGE/MarsWS/blob/main)  

## 概要
+ 教育用缶サットを用いたワークショップ
+ 火星の居住可能地域をローバーを用いて探索するというストーリー。プログラミングを実際に手を動かしながら学び、最終的にはローバーをプログラミングにより動かしたり、ローバーの機体に工夫を凝らしたりして将来的に人類が移住できる可能性のある「火星のオアシス」を見つけ出す。

ーーーーーーーーーーーーーーーーーーーーーー以下調整中ーーーーーーーーーーーーーーーーーーーーーーー

### センサ
+ 超音波センサ
	- 物体の有無を調べる 

## 資料一覧
+ `./Arduino` ：サンプルコードとその設定など
	- [Arduinoについて](./Arduino/)
	- 機器のテストコード（動作試験）
		* [GPSの単体テスト](./Arduino/Test_GPS)
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
		* 過去
			+ [カメラ（2020年使用版）の単体テスト](./Arduino/Test_Camera_2020)
			+ [高度計（気圧計）（2020年使用版）の単体テスト](./Arduino/Test_Barometer)
	- 機器のテストコード（複数使用）
		* [全機器の統合状態のテスト](./Arduino/Test)
		* [光センサを４並列にした光方向センサ](./Arduino/Test_Light_x4)
		* [サーボモータの２並列版](./Arduino/Test_Servo_x2)
		* [DCモータの２並列版](./Arduino/Test_DCMotor_x2)
	- プログラミング講習
		* [00. 事前準備](./Arduino/ProgrammingTutorial00_Preparation)
		* [01. HelloWorld](./Arduino/ProgrammingTutorial01_HelloWorld)
		* [02. Variable](./Arduino/ProgrammingTutorial02_Variable)
		* [03. Operator](./Arduino/ProgrammingTutorial03_Operator)
		* [04. If Else](./Arduino/ProgrammingTutorial04_IfElse)
		* [05. Loop](./Arduino/ProgrammingTutorial05_Loop)
		* [06. Function](./Arduino/ProgrammingTutorial06_Function)
		* [07. Device1 （高度計）](./Arduino/ProgrammingTutorial07_Device1)
		* [08. Device2 （方位磁石）](./Arduino/ProgrammingTutorial08_Device2)
		* [09. Device3 （サーボモータの利用）](./Arduino/ProgrammingTutorial09_Device3)
		* [10. Application （明るさ計）](./Arduino/ProgrammingTutorial10_Application)
	- 実装例
		* [明るさ計](./Arduino/App_LightMeter)

