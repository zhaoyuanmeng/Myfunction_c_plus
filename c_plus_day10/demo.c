/*
* @Author: Marte
* @Date:   2018-12-28 16:46:57
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-28 19:46:35
*/

#include <stdio.h>
#include <string.h>
int main() {


    // int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int(*ptr)[3]=a;
    // int *p=a[0];
    // printf("%d",*((ptr+1)[2]));  结果为10

    // int a[5]={1,2,3,4,5};
    // void myfunc1(int *name,int n);
    // void myfunc2(int *name,int n);
    // void myfunc3(int *name,int n);
    // myfunc3(a,5);
    // myfunc2(a,5);
    // myfunc1(a,5);

//********结构体部分************//
    // void myfunc4();
    // myfunc4();

    // void myfunc5();
    // myfunc5();
       void myfunc6();
       myfunc6();
    return 0;
}

/**
 * [myfunc 基础的方法]
 * @param name [数组的首地址]
 * @param n    [元素的个数]
 * @param      [功能是循环遍历数组元素]
 */
void myfunc1(int *name,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",name[i]);
    }
}


/**
 * [myfunc 使用指针变量]
 * @param name [数组的首地址]
 * @param n    [元素的个数]
 * @param      [功能是循环遍历数组元素]
 */
void myfunc2(int *name,int n){
    int i;
    int *p=name;
    for(i=0;i<n;i++){
        printf("%d\n",*p++);
    }
}


/**
 * [myfunc 使用指针变量]
 * @param name [数组的首地址]
 * @param n    [元素的个数]
 * @param      [功能是循环遍历数组元素]
 */
void myfunc3(int *name,int n){

    int *p=name;
    for(;p<name+n;p++){
        printf("%d\n",*p);
    }
}


/**
 * 不采用指针的形式
 * 实现结构体变量的循环遍历
 *
 */
void myfunc4(){
struct student{
    char name[10];
    int age;
}people[2]={"yuanda",20,"mianma",18};
for (int i = 0; i < 2; ++i)
{
    printf("\n第%d个学生的名字是：%s",i+1,people[i].name);
    printf("\n第%d个学生的年龄是：%d",i+1,people[i].age);
}
}

/**
 * 采用指针的形式
 * 实现结构体变量的输入与输出
 *
 */
void myfunc5(){

    struct student
    {
        int age;
        char name[10];

    };
    int i;
    struct student boy[3];
    struct student *p=boy;
    for(;p<boy+3;p++){


        printf("\nEnter your name:");
        scanf("%s",p->name);

         printf("\nEnter your age:");
        scanf("%d",&(p->age));
    }
     for(p=boy;p<boy+3;p++){
        printf("\nputer your name:");
        printf("%s",p->name);
        printf("\nputer your age:");
        printf("%d",(p->age));
    }
}


/**
 * 采用指针的形式
 * 实现结构体变量的输入与排序输出
 *
 */
void myfunc6(){

    struct student
    {
        int age;
        char name[10];

    };
    int i,j;
    struct student boy[3],t;
    struct student *p=boy;

    //输入
    for(;p<boy+3;p++){


        printf("\nEnter your name:");
        scanf("%s",p->name);

         printf("\nEnter your age:");
        scanf("%d",&(p->age));
    }

    //排序
    for ( i = 0; i < 2; ++i)
    {
       for ( j = 0; j <2-i ; ++j)
       {
          if(strcmp(boy[j].name,boy[j+1].name)<0){
                t =boy[j];
                boy[j] = boy[j+1];
                boy[j+1]=t;
          }
       }
    }

    //输出
     for(p=boy;p<boy+3;p++){
        printf("\nputer your name:");
        printf("%s",p->name);
        printf("\nputer your age:");
        printf("%d",(p->age));
    }
}