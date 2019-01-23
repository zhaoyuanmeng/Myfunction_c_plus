#include<stdio.h>
int main(void){

    int myfunc1(int n);
    int myfunc2(int n);
    int myfunc3(int n);
    int myfunc4(int n);
    int myfunc5(int n);

    int n,temp=0,count;
    printf("ENTER YOUR NUMBER :");

    for ( n= 1; n<=5; ++n)
    {
        temp+=myfunc3(n);
    }
    temp  = myfunc4(temp);
    count = myfunc5(temp);
    printf("\n%d oppsition affect is  %d",n,temp);
    printf("\n%d count  is  %d",temp,count);

    return 0;

}

/*
    @param 这是一个自己定义的函数用来求阶乘的
    @param 它的参数有一个 那就是所求的数
    @param 这个函数的返回值有一个 就是结果
    @param 已经亲自测试过没有问题哦！！！
*/

/************** 没有用递归求阶乘 ***************/
int myfunc1(int n){
    int i,product=1;
    for(i=1;i<=n;i++){
        product = product*i;
    }
    return product;
}
/**************** EDNS **********************/

/**
 *@param 这也是一个自己定义的函数用来求阶乘的
 *@param 参数也只有一个  就是用来求输入的数据
 *@param 返回值也只有一个 但是这个方法比较特殊使用递归的方式
 *@param
 */

/*****************采用递归的方法**************/
int myfunc2(int n){

    if(n==1){
        return 1;
    }else{
        return n*myfunc2(n-1);
    }
}
/******************EDNS **********************/

/**
 *@param 这个函数也是自定义求阶乘的 不过是求1到n的阶乘之和
 *@param 参数只有一个int
 *@param 返回值也只有一个
 *@param 本人亲自测试过了 亲测好用
 */


/******************静态变量的方法 **********************/
int myfunc3(int n){

 static int f=1;
 f=f*n;
return f;
}
/******************EDNS **********************/


/**
 *@param 这个函数也是自定义将一个数逆序输出不采用数组的方式
 *@param 参数只有一个int
 *@param 返回值也只有一个
 *@param 本人亲自测试过了 亲测好用
 */

/******************证书逆序输出 **********************/
int myfunc4(int n){

    int m=0;
    while(n!=0){
        m=n%10+m*10;
        n=n/10;
    }
    return m;
}
/******************EDNS **********************/

/**
 *@param 这个函数也是自定义求一个整数的位数
 *@param 参数只有一个int
 *@param 返回值也只有一个
 *@param 本人亲自测试过了 亲测好用
 */
int myfunc5(int n){

    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}


