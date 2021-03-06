//
//  main.cpp
//  cpp3
//
//  Created by 増山幸一 on 2019/10/06.
//  Copyright © 2019 増山幸一. All rights reserved.
//

#include <iostream>
using namespace std;

int numOfDivisors(int n) {
  int divisors = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;
  }
  return divisors;
}

int main() {
  //10から20までの数の約数を数える
  for (int n = 10; n <= 20; ++n) {
    int result = numOfDivisors(n);
    cout << n << "の約数の数：" << result << endl;
  }
}
