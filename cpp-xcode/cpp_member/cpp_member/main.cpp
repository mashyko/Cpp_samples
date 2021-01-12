//
//  main.cpp
//  cpp_member
//
//  Created by 増山幸一 on 2021/01/11.
//

#include <iostream>
#include <string>
using namespace std;
struct Dog
{
private:
    string name;
public:
    Dog(string s){
        name = s;
    }
    void wan(){
        cout<<"わんわん。私の名前は"<<name<<"です。"<<endl;
    }
};
int main()
{
    Dog shelty("アンジー");
    shelty.wan();
}

