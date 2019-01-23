/*
* @Author: YUANDA
* @Date:   2018-12-22 15:36:22
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-22 16:38:39
*/

#include <stdio.h>

int main() {

int myfunc1(int n,int m);
int myfunc2(int *name,int n);
int myfunc3(int *name);
void myfunc4(int n,int *b);
void myfunc5(int n);

int a[5]={1,2,3,4,5};
myfunc4(12345,a);
for (int i = 0; i < 5; ++i)
{
    printf("%2d\n",a[i] );
}
myfunc5(123);
    return 0;
}

/**
 *@param 求最大工约数
 *@param 参数只有有两个
 *@param 返回值是两个数的最大公约数
 */
int myfunc1(int n,int m){
    int r;
    while(n!=0){
        r=m/n;
        m=n;
        n=r;
    }
    return m;
}


/**
 * @param求一个数组中的最大值
 * @param参数值有一个数组的地址,还有数组的个数
 * @param返回值有一个就是最大值
 */
int myfunc2(int *name,int n){

int max,i;
max = name[0];
for ( i = 1; i < n; ++i)
{
   if(max<name[i]){
    max = name[i];
   }
}

return max;
}


/**
 * @param求一个数组中的最小值 采用指针的方法
 * @param参数值有一个数组的地址,还有数组的个数
 * @param返回值有一个就是最大值
 */
int myfunc3(int *name){

int min;
int *p;
p=name;
min = name[0];
while(*p){
    if(min>(*p)){
        min = *p;
    }
    p++;
}
return min;
}

/**
 * @param求一个数逆序输出并写入到更一个数组中
 * @param参数值有两个 第二个是数组的地址
 * @param该函数没有返回值
*/
 void myfunc4(int n,int *b){
    int i=0,a;
    while(n){
        a = n%10;
        b[i]=a;
        i++;
        n = n/10;
    }
 }


/**
 * @param求一个数逆序输出 采用递归的方式
 * @param参数值有两个 第二个是数组的地址
 * @param该函数没有返回值
*/
 void myfunc5(int n){
    int i;
    printf("%2d\n", n%10);
    if((i=n/10)!=0){
        myfunc5(i);
    }
    printf("%2d\n", n%10);
 }




