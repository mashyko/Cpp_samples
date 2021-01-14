#include <iostream>
using namespace std;
int main() {
  //算術演算子
  cout << "算術演算子の結果" << endl;
  cout << (3 /2 ) << endl; // 出力値：1
  cout << (3 /2.0 ) << endl; // 出力値：1.5
  cout << (10 % 4) << endl;//出力値：2
  cout << (1 + 2 * 3) << endl;//出力値：7
  //比較演算子
  cout << "比較演算子の結果" << endl;
  cout << (1 < 2) << endl;//出力値：1（trueを意味する）
  cout << (3 < 2) << endl;//出力値：0（falseを意味する）
  //論理演算子
  cout << "論理演算子の結果" << endl;
  cout << (1 < 2 && 2 < 3) << endl;//論理積の出力値：1（trueを意味する）
  cout << (1 < 2 && 3 < 2) << endl;//論理積の出力値：0（falseを意味する）
  cout << (2 < 1 || 1 < 2) << endl;//論理和の出力値：1（trueを意味する）
  cout << (!(2 < 1))       << endl;//論理否定出力値：1（trueを意味する）
   //代入演算子
  cout << "代入演算子の結果" << endl;
  int x = 0;
  cout << (x = 5) << endl;//出力値：5（演算子の評価結果）
  cout << x       << endl;//出力値：5（演算子の副作用）
  int y, z;
  cout << (y = z = 5) << endl;//出力値：5（演算子の評価結果）
  cout << y << endl;          //出力値：5
  cout << z << endl;          //出力値：5
}
