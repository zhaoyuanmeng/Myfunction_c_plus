/*
* @Author: YUANDA
* @Date:   2018-12-24 11:25:13
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-25 19:22:48
*/

#include <stdio.h>
#define MAX 100
int main() {

    // int n,temp;
    // int myfunc1(int n);
    // scanf("%d",&n);
    // temp = myfunc1(n);
    // printf("Result is %d\n",temp);



    // void myfunc2(int n);
    // myfunc2(3);

    // void myfunc3();
    // myfunc3();


    //  int n;
    //  printf("enter your number:");
    //  scanf("%d",&n);
    // void myfunc6(int n);
    // myfunc6(n);


     void myfunc5();
     myfunc5();
    return 0;
}


/**
 *  @param 斐波那契（递归的方法）
 *  @param 参数只有一个
 *  @param 返回值只有一个
 */
int myfunc1(int n){
    if(n==1||n==2){
        return 1;
    }else{
        return myfunc1(n-2)+myfunc1(n-1);
    }
}
/**
 *  @param 斐波那契（数组的方法）
 *  @param 参数只有一个
 *  @param 返回值只有一个
 */
void myfunc2(int n){

    int a[MAX]={1,1};
    int count =1;
    for (int i = 2; i < n; ++i)
    {
        a[i]=a[i-1]+a[i-2];
    }
   for (int i = 0; i < n; ++i)
   {

       printf("this %d count  is : %d\n",count,a[i]);
       count++;
   }
 }


/**
 *  输出金字塔（上下对称）
 *
 *
 */
void myfunc3(){

int i,j,k;
 for(i=1;i<=4;i++)
       {
         for(j=1;j<=4-i;j++)
            printf(" ");
         for(k=1;k<2*i;k++)
            printf("*");
          printf("\n");
       }
    for(i=1;i<=3;i++)
       {
         for(j=1;j<=i;j++)
           printf(" ");
         for(k=6-2*i;k>=0;k--)
           printf("*");
           printf("\n");
       }
}

/**
 *
 *   完全平方数
 *
 */

int myfunc4(){

}

/**
 *
 *  乘法表（各种组合）
 *
 */

void myfunc5(){
    int i,j;
    for ( i = 1; i <= 9; ++i)
    {
       for ( j = 1; j <=9; ++j)
       {
            //在内循环可以加输出条件
        if(i==j)
                printf("%d*%d=%-4d",i,j,i*j);
            else printf("          ");

       }
       printf("\n");
    }

}



/**
 *  1
 *  11
 *  121
 *  1331
 *  14641
 *  杨辉三角
 *
 */
void myfunc6(int n){

   int a[10][10];
   int i,j;
   for(i=0;i<n;i++){

    for(j=0;j<=i;j++){
        a[j][0]=1;
        a[j][j]=1;
    }

    }
    for(i=2;i<n;i++){

        for(j=1;j<i;j++){
            a[i][j] = a[i-1][j-1]+a[i-1][j];
        }
    }

    for ( i = 0; i < n; ++i)
    {
        for ( j = 0; j<= i; ++j)
        {
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
   }


