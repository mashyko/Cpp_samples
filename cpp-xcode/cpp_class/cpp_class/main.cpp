//
//  main.cpp
//  cpp_class
//
//  Created by 増山幸一 on 2021/01/11.
//

#include <iostream>
#include <string>
using namespace std;
struct nakayoshiClub {
  string name;
  int age;
};
int main() {
  // nakayoshiClubのオブジェクト souta を構築
  nakayoshiClub souta;
  souta.name = "壮太";
  souta.age = 54;
  cout << souta.name << endl;//出力値：souta (54)
  cout << souta.age << endl;
}
