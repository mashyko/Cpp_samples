//
//  main.cpp
//  ccp_c
//  written in the same format as C language
//  Created by 増山幸一 on 2021/01/11.
//

#include <stdio.h>
#include <string.h>
 
struct person {
    char name[40];
    char job[40];
    int age;
    int phone;
};
 
void showStatus(struct person chara) {
    printf("名前：%s\n", chara.name);
    printf("職業：%s\n", chara.job);
    printf("年齢：%d\n", chara.age);
    printf("phone：%d\n", chara.phone);
}
 
int main(int argc, const char * argv[])
{
     
    // insert code here...
     
    //souta
    struct person souta;
    strcpy(souta.name, "壮太");
    strcpy(souta.job, "教師");
    souta.age = 40;
    souta.phone = 12345;
     
    showStatus(souta);
    
     //hanako
    struct person hanako;
      strcpy(hanako.name, "花子");
      strcpy(hanako.job, "プログラマー");
      hanako.age = 45;
      hanako.phone = 23456;
    
     
    showStatus(hanako);
     
    return 0;
}
