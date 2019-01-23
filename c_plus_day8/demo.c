/*
* @Author: Yuanda
* @Date:   2018-12-26 19:32:53
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-27 17:10:05
*/

#include <stdio.h>

int main() {
void myfun1();
void myfun2();
void myfun3();
void myfun4();
void myfun5();
void myfun6();
void myfun7();
void myfun8();
void myfun9();
void myfun10();
    myfun1();
    printf("******************\n");
    myfun2();
    printf("******************\n");
    myfun3();
    printf("******************\n");
    myfun4();
    printf("******************\n");
    myfun5();
    printf("******************\n");
    myfun6();
    printf("******************\n");
    myfun7();
    printf("******************\n");
    myfun8();
    printf("******************\n");
    myfun9();
    printf("******************\n");
    myfun10();


    return 0;
}

/**
 * 输出全乘法表
 */
void myfun1(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
            printf("%2d*%2d=%-3d",i,j,i*j);
        }
        printf("\n");
    }
}
/**
 * 输出左下角乘法表
 */
void myfun2(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=i; ++j)
        {
            printf("%2d*%2d=%-3d",i,j,i*j);
        }
        printf("\n");
    }
}

/**
 * 输出右上角
 *
 */
void myfun3(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if (i<=j)
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}

/**
 * 输出主对角线
 *
 */
void myfun4(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if (i==j)
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}

/**
 * 输出次对角线
 *
 */
void myfun5(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if (i+j==9)
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}

/**
 * 输出上面的一小部分
 *
 */
void myfun6(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if ((i<=j)&&(i<=9-j))
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}


/**
 * 输出上面的一小部分
 *
 */
void myfun7(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if ((i<=j)&&(i>=9-j))
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}

/**
 * 输出上面的一小部分
 *
 */
void myfun8(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if ((i<=j)&&(i<=9-j))
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}

/**
 * 输出上面的一小部分
 *
 */
void myfun9(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if ((i>=j)&&(i>=9-j))
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}

/**
 * 输出上面的一小部分
 *
 */
void myfun10(){
    int i,j;

    for(i=1;i<=9;i++){
        for ( j = 1; j <=9; ++j)
        {
           if ((i>=j)&&(i<=9-j))
            {
               printf("%2d*%2d=%-3d",i,j,i*j);
            }else printf("         ");
        }
        printf("\n");
    }
}












