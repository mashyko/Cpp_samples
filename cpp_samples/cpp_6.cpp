#include <stdio.h>
 
int main(void) {
    const char *str1 = "Hello";
    const char *str2 = "World";
    const char chr1 = '!';
 
     // 文字および文字列
    printf("%s %s%c\n", str1, str2, chr1);
 
    double d1 = 1.234567;
    double d2 = 12.34567;
    double d3 = 123.4567;
 
    // 浮動小数点数
    printf("d1:%f\n", d1);
    printf("d2:%f\n", d2);
    printf("d3:%f\n", d3);
  
    return 0;
}