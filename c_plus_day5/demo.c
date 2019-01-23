/*
* @Author: Marte
* @Date:   2018-12-23 11:13:27
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-23 13:23:55
*/

#include <stdio.h>
#include <string.h>
#define MAX 10
int main(void){

/************第一个函数的测试代码**************/

    // int myfunc1(int n);
    // int n,count;
    // printf("Enter your numeber!:\n");
    // scanf("%d",&n);
    // count = myfunc1(n);
    // printf("%2d!  zero count is %d\n",n,count );

/*************ENDS***************************/

/************第二个函数的测试代码**************/

    // void myfunc2(char *name[],int n);
    // //必须定义成数组指针的形式
    // char *name[5]={"zhao","jiang","cui","kang","heyu"};
    // myfunc2(name,5);
    // for (int i = 0; i < 5; ++i)
    // {
    //   printf("%s\n",name[i]);
    // }

/*************ENDS***************************/

/************第三个函数的测试代码**************/
    // int name[6]={2,5,7,4,9};
    // int i;
    // void myfunc3(int *name,int n,int m);
    // myfunc3(name,5,1);
    // for(i=0;i<6;i++){

    //     printf("%2d\n",name[i] );
    // }
/*************ENDS***************************/

/*************第四个函数***************************/
    // int myfunc4();
    // int count;
    // count =myfunc4();
    // printf("the count is %d\n",count);

/*************ENDS***************************/

/*************第五个函数***************************/
void myfunc5(char *name1,char *name2,char c);
char *name1 = "qwe";
char name2[10];
myfunc5(name1,name2,'w');
printf("%s\n",name2 );
/*************ENDS***************************/
    return 0;
}

/**
 *@param求n！最后的数中0的个数
 *@param int int n 阶乘数
 *@param 返回值是零的个数
 *@param 经过测试可以使用
 */

int myfunc1(int n){
    int i,count=0;
    for(i=1;i<=n;i++){
        if (i%5==0)
        {
            count++;
        }
    }
    return count;
}

/**
 *@param 将姓氏名按照从大到小的顺序输出
 *@param 二维数组的数组名（也可以是一个地址值）参数二是数组元素的个数
 *@param 没有返回值
 *@param 经过测试可以使用
 */

void myfunc2( char *name[],int n){

    char *t;
    int i,j;
    for(i=0;i<n-1;i++){

        for(j=0;j<n-1-i;j++){

            if(strcmp(name[j],name[j+1])<0){
                t       = name[j];
                name[j] = name[j+1];
                name[j+1] = t;
            }
        }

    }
}


/**
 *@param 对排好顺序的数组插入一个数
 *@param 参数有两个 一个是数组名 另一个是需要插入的数
 *@param 没有返回值
 */
void myfunc3(int *name,int n,int m){

    int i,k,j,t;
    //先排顺序
    for(i=0;i<n-1;i++){
        k = i;
        for(j=i+1;j<=n-1;j++){
            if(name[k]>name[j]){
                k=j;
            }
        }
        if(k!=i){
            t       = name[i];
            name[i] = name[k];
            name[k] = t;
        }
    }
    //找插入点
    for(i=0;i<n;i++){
        if(name[i]>m){
         for(j=n-1;j>=i;j--)  //必须是从后往前算 否则输入的都是一样的 例如122222
         name[j+1] =name[j];
            break;
        }
    }

    name[i] =m;
}

/**
 *@param 对排好顺序的数组插入一个数
 *@param 参数有两个 一个是数组名 另一个是需要插入的数
 *@param 没有返回值
 */
int myfunc4(){

    char c;
    int count=0;
    while((c=getchar())!='\n'){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            count++;
        }
    }
    return count;
}
/**
 *@param 删除指定的字符 并显示删除后的字符串
 *@param 参数有两个 一个是数组名 另一个是需要删除的字符
 *@param 没有返回值
 */
void myfunc5(char *name1,char *name2,char a){

    while(*name1){
        if(*name1!=a){
            *name2++ = *name1;
        }
        name1++;
    }
    *name2 = '\0';
}






