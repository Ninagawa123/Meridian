
// 初期化処理を行う関数
// コンストラクタは　クラス名::クラス名と同じ名前で構成します
LightingControl::LightingControl(int PinNo)
{
     pinMode(PinNo, OUTPUT) ;        // 指定されたデジタルピン番号をＬＥＤ出力に設定
     LED_PinNo = PinNo ;
}
// ＬＥＤを点灯する関数(メソド関数)
// クラス名::関数名() で構成します
void LightingControl::On()
{
     digitalWrite(LED_PinNo, HIGH) ; // LEDを点灯する
}
// ＬＥＤを消灯する関数(メソド関数)
void LightingControl::Off()
{
     digitalWrite(LED_PinNo, LOW) ;  // LEDを消灯する
}
