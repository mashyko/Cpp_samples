#include <iostream>
using namespace std;
 
int main() {
	float x =12.5;
	float* px = &x;
	*px = 150.5;
 
cout << x << endl;// x=150.5
}