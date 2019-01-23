/*
* @Author: Marte
* @Date:   2018-12-31 19:46:17
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-31 21:22:47
*/

#include <stdio.h>
#include <math.h>
int main() {

void myfunc1();
void myfunc2(int n);
void myfunc3();
void myfunc4();
void myfunc5();
myfunc5();
//myfunc4();
//myfunc3();

//myfunc1();
 // myfunc2(1234);
    return 0;
}
/**
 * 一球从100米落下 每次落地后反弹回原来高度的一般 再落下 求他在第10次落地时一共经过多少米 第10次反弹为多高
 */
void myfunc1(){
    float sn=100.0,hn=sn/2;
    int n;
    for(n=2;n<=10;n++){
        sn = sn+hn*2;
        hn = hn/2;
    }
    printf("the ten number is %f\n",sn );
    printf("the ten fantan is %f",hn);
}

/**
 * 用递归的方式将一个整数n转化成字符串。例如输入1234应该输出“4321”
 */
void myfunc2(int n){
    int i;
    putchar(48+n%10);
    if((i=n/10)!=0){
        myfunc2(n/10);
    }

}

void myfunc3(){
    double item=1.0,pi=0.0,n=1.0;
    int sign=1;
    while(fabs(item)>1e-8){
        pi =pi+item;
        n=n+2;
        sign =-sign;
        item = sign/n;
    }
    pi = pi*4;
    printf("pai = %lf",pi);

}

/**
 *
 *测试格式符的输出（整形）
 */
void myfunc4(){
int a =1;
int b=10;
int c=-1;
printf("is%3d",a);//右对齐左补空
printf("\nis%-3d!",a);//左对齐右补空格
printf("\neight is %o",b);
printf("\nsixten is %x",b);
printf("\nunsign is %u",c);
}

/**
 *测试格式符的输出（实数形）都按double算
 *
 */
void myfunc5(){
    float a=1.3;
    printf("is%f\n",a ); //默认输出小数点后6位
    printf("\nis%.1f\n",a); //输出小数点后1位
    printf("\nis%.f\n",a); //输出整数部分四舍五入

}