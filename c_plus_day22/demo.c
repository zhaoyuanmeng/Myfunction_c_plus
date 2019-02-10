/*
* @Author: Yuanda
* @Date:   2019-02-10 20:00:45
* @Last Modified by:   Marte
* @Last Modified time: 2019-02-10 20:20:26
*/

#include <stdio.h>

int main() {
    void myfunc1();
    void myfunc2();
    void myfunc3();
    myfunc1();
    printf("********************------------------*********************\n");
    myfunc2();
    printf("********************------------------*********************\n");

    myfunc3();



    return 0;
}



/**
 * 输出小写字母的金字塔
 */
void myfunc1(){

    char a='a';
    int i,j;

    for ( i = 0; i < 26; ++i)
    {
        for ( j = 0; j < 25-i; ++j)
        {
           //printf  space
           printf(" ");
        }

        for ( j= 0; j <=i ; ++j)
        {
          printf("%c",a+j);
        }
        for ( j =i-1; j >=0; --j)
        {
            printf("%c",a+j);
        }
        printf("\n");
    }


}


/**
 * 输出大写字母的金字塔
 */
void myfunc2(){

    char a='A';
    int i,j;

    for ( i = 0; i < 26; ++i)
    {
        for ( j = 0; j < 25-i; ++j)
        {
           //printf  space
           printf(" ");
        }

        for ( j= 0; j <=i ; ++j)
        {
          printf("%c",a+j);
        }
        for ( j =i-1; j >=0; --j)
        {
            printf("%c",a+j);
        }
        printf("\n");
    }


}

/**
 * 输出数字金字塔
 */
void myfunc3(){

    int a=1;
    int i,j;

    for ( i = 0; i < 9; ++i)
    {
        for ( j = 0; j < 25-i; ++j)
        {
           //printf  space
           printf(" ");
        }

        for ( j= 0; j <=i ; ++j)
        {
          printf("%d",a+j);
        }
        for ( j =i-1; j >=0; --j)
        {
            printf("%d",a+j);
        }
        printf("\n");
    }


}



