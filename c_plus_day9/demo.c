/*
* @Author: Marte
* @Date:   2018-12-27 17:10:44
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-27 18:24:18
*/

#include <stdio.h>

int main() {

    // void myfun1();
    // myfun1();
    //

    // void myfun2(int n);
    // int n;
    // printf("enter your number:");
    // scanf("%d",&n);
    // printf("%d=",n);
    // myfun2(n);
    //
    //

    // void myfun3();
    // myfun3();
    //
    //

    // int myfun4(int a,int n);
    // int myfun5(int a,int n);
    // int a;
    // a = myfun5(2,2);
    // printf("is  %d\n",a);

      int myfun6(int n);
      int a;
      a =myfun6(3);
      printf("is  %d\n",a );
    return 0;

}


/**
 * 完全数它所有的真因子(即除了自身以外的约数)的和(即因子函数)如果一个数恰好等于它的因子之和，则称该数为"完全数"。
 */
void myfun1(){
int i,j,t;
    for ( i = 2; i < 100; ++i)
    {
        t =0;
       for ( j = 1; j < i; ++j)
       {
          if(i%j==0){
            t = t+j;
          }
       }

       if(t == i){
        printf("%d\n",i);
       }
    }
}

/**
 *输出60=2*3*3*5
 *
 */
void myfun2(int n){
    int i;
    for (i = 2; i < n; ++i)
    {
        while(n!=i){
            if(n%i==0){
                printf("%d*",i);
                n = n/i;
            }
            else{
                break;
            }
        }
    }
    printf("%d",n);
}

/**
 * 1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？
 *
 */
 void myfun3(){
 int i,j,k;
for ( i = 1; i <=4 ; ++i)
{
    for ( j = 1; j <=4; ++j)
    {
       for ( k = 1; k<=4; ++k)
       {
          if((i!=k) && (i!=j) && (j!=k)){
                printf("%d\n",i*100+j*10+k);
          }
       }
    }
}
}

/**
 * 计算2+22+222+2222 （两种方式）
 */

int myfun4(int a,int n){

    int s,t;
    s =0;
    t =0;
    while(n!=0){
        t = t*10+a;
        s= s+t;
        n--;
    }
    return s;
}

int myfun5(int a,int n){

    int s=0,t=0,k;


    while(n>=1){
       k=a;
       s =s+k;
       t =t+s;
       a =a*10;
        n--;
    }
    return t;
}



/**
 *  1的一次方+2的二次方+3的三次方...
 *
 */

int myfun6(int n){

  int i,t,sum=0,j;

  for ( i = 1; i <= n; ++i)
  {
    t = 1;
    j  =i;

    while(j){
      t = t*i;
      j--;
    }
    sum =sum+t;
  }
  return sum;
}






