/*
* @Author: YUANDA
* @Date:   2018-12-31 21:23:30
* @Last Modified by:   Marte
* @Last Modified time: 2019-01-01 22:44:12
*/

#include <stdio.h>

int main() {
void myfunc1();
 void myfunc2();
  void myfunc3();
// void myfunc4();
// void myfunc5();
//myfunc1();
 //myfunc2();
    myfunc3();
    return 0;
}
/**
 *测试格式符的输出（char）
 *
 */
void myfunc1(){
    char a ='a';
    printf("%c\n",a );
    printf("\n%c",65); //字符和ascll码可以互相转化
    printf("\n%c",48); //特殊的几个字符 '0' 'a' 'A'
    printf("\n%c",97);  //转化是a+'0'或者a+48(数字转化成字符)
    printf("\n%c",0x61);//'a'与‘A’相差32
    printf("\n%c",060);

}

/**
 *测试格式符的输出（string）
 */
void myfunc2(){
char *name="hello world";
char name1[]="hello php";
printf("%s\n",name );
printf("%s\n",name1+1);

}
/**
 *测试格式符的输出（指数型）
 *
 */
void myfunc3(){
    float a=123.13;
    printf("%e\n",a ); //默认是小数点后六位
    printf("%15.2e\n",a );
    printf("%.e\n",a );  //e前如果没有就代表没有保留小数点不是当为1看


}