#include <iostream>
using namespace std;
 
int main() {
	float x =12.5;
	float& y = x;
	y = 150.5;
 
cout << x << endl;//x = 150.5
}