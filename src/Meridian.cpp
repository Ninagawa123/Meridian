#include "arduino.h"
#include "Meridian.h"

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
