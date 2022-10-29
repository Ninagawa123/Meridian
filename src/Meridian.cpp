#include "arduino.h"
#include "Meridian.h"

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

// +----------------------------------------------------------------------
// | 関数名　　:  checksum_val(short arr[], int len)
// +----------------------------------------------------------------------
// | 機能     :  配列のチェックサムを算出
// | 　　     :  チェックサムは配列の末尾を除く合計数をビット反転しShort型にしたもの
// | 引数１　　:  Meridim配列(Short型の配列)
// | 引数２　　:  配列の長さ
// | 戻り値　　:  short型. チェックサム値
// +----------------------------------------------------------------------
short Meridian::checksum_val(short arr[], int len)
{
    int cksm = 0;
    for (int i = 0; i < len - 1; i++)
    {
        cksm += int(arr[i]);
    }
    return short(~cksm);
    // return ~cksm;//★もとの式　動いたら消す
}



// クラスの定義
// クラス名・コンストラクタ名・関数名や使用する変数名を定義します。
class LightingControl
{
  public:
         LightingControl(int PinNo) ;
    void On() ;
    void Off() ;
  private:
    int LED_PinNo ;    // LEDの接続されているピン番号を保存する変数
} ;

#endif
