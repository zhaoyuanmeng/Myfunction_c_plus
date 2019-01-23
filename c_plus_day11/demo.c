/*
* @Author: YUANDA
* @Date:   2018-12-29 16:44:18
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-29 17:38:13
*/

#include <stdio.h>

int main() {

    void myfunc1(int *x,int *y);
    void myfunc2(int *x,int *y);
    void myfunc3();
    void myfunc4();
    void myfunc5();
    void myfunc6();

    // int x,y;
    // printf("Enter your number:");
    // scanf("%d,%d",&x,&y);
    // myfunc2(&x,&y);
    //printf("x=%d,y=%d\n",x,y);
    //myfunc1(&x,&y);
    //printf("x=%d,y=%d\n",x,y);
    //myfunc3();
    //myfunc4();
    //myfunc5();
    myfunc6();
    return 0;
}


/**
 * 指针交换值
 *
 */
void myfunc1(int *x,int *y){
    int t;
    t  = *x;
    *x = *y;
    *y =  t;
}


/**
 * 指针比较大小
 *
 */
void myfunc2(int *x,int *y){
   int *p,*p1,*p2;
   p1=x;
   p2=y;
   if(*p1>*p2){
    p=p1;
    p1=p2;
    p2=p;
   }
   printf("max is %d\n",*p2);
   printf("min is %d\n",*p1);
}


/**
 * 指针变量输入并输出10个数
 *
 */
void myfunc3(){
    int a[10];
    int *p=a;
    //输入
    for(;p<a+10;p++){
        scanf("%d",p);
    }
    //输出
    for(p=a;p<a+10;p++){
        printf("%d\n",*p);
    }
}

/**
 * 指针的方式表示二维数组的元素
 *
 */
void myfunc4(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int (*p)[3]=a;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2d",*(*(p+i)+j));
        }
        printf("\n");
    }
}



void myfunc5(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int (*p)[3]=a;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2d",*(p[i]+j));
        }
        printf("\n");
    }
}


void myfunc6(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int *p=&a[0][0];
    for(i=0;i<9;i++){
       printf("%d\n",*(p+i) );
    }
}



