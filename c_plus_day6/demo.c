/*
* @Author: yuanda
* @Date:   2018-12-24 10:22:23
* @Last Modified by:   Marte
* @Last Modified time: 2019-01-01 22:41:02
*/

#include <stdio.h>
#define MAX 5
int main() {


// int myfunc1(int n);
// int n;
// printf("Please enter your number:");
// scanf("%d",&n);
// if(myfunc1(n)){
//     printf("This sushu\n");
// }
// else printf("This not sushu\n");


  int myfunc2(int n);
  int n;
  n = myfunc2(370);
  printf("%d\n",n);



   // void myfunc3();
   // myfunc3();


   // void myfunc4(int n);
   // myfunc4(6);

    // void myfunc5();
    // myfunc5();
 return 0;
}


/**
 * @param 求一个数是不是素数
 * @param 参数有一个
 * @param 返回值是bool类型的
 */
int myfunc1(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i>=n){
        return 1;  //代表是素数
    }
    else return 0;//代表不是素数
}


/**
 * @param 求一个数是不是水仙花数 各位的数字的位幂数等于原来的数
 * @param 参数是所要验证的数
 * @param 返回值是结果
 */
int myfunc2(int n){
    int i=0;
    int a[MAX];
    int t=0,count,t1;
    int s;
    while(n!=0){
        a[i]=n%10;
        i++;
        n=n/10;
    }

    for( s=0;s<i;s++){
        //t +=a[s]*a[s]*a[s];
        t1=1;
        count=i; //考虑到次数应该是定值所以放在外循环 不然就执行一整次while count就变为0了就不执行了
        while(count){
            t1*=a[s];
            count--;
        }
        t+=t1;
    }
    return t;
}


/**
 * @param 求100到1000的水仙花数
 * @param 没有参数
 * @param 没有返回值
 */
void myfunc3(){

    int n=100;
    int a,b,c;
    while(n<=999){
        a = n/100;
        b = n/10%10;
        c = n%10;
        if(n == (a*a*a+b*b*b+c*c*c)){
            printf("this : %-3d",n);
            printf("\n");
        }
        n++;
    }
}

/**
 * @param求完全数若一个自然数恰好与除去它本身以外的一切因数的和相等，这种数叫做完全数。
 * @param 没有参数
 * @param 没有返回值
 */
void myfunc4(int n){
    int i,t=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            t+=i;
        }
    }
    if(t == i){
        printf("true");
    }else{
        printf("false");
    }
}

/**
 * @param 求1-100以内的完全数
 * @param 没有参数
 * @param 没有返回值 直接输出满足条件的数
 */
void myfunc5(){
    int i=2;
    int j,t;
    while(i<=100){
        t=0;             //这是一个注意点
        for(j=1;j<i;j++){
            if(i%j==0){
                t +=j;
            }
        }
        if(i==t){
            printf("this is :%d",i);
            printf("\n");
        }

        i++;
    }
}





