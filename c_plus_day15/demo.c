/*
* @Author: Marte
* @Date:   2019-01-19 19:02:55
* @Last Modified by:   Marte
* @Last Modified time: 2019-01-19 22:11:51
*/

#include <stdio.h>

int main() {
void myfunc1(char a,int x,int y);
void myfunc2(char c,int count);
void myfunc3(char c,int count);
void myfunc4(char c,int count);
void myfunc5(char c,int count);
void myfunc7(int count);
void myfunc8(int count);





char a;
int x,y;
printf("Enter your char:\n");
scanf("%c",&a);
for (x=10,y=10;x>5;x--,y++){
    myfunc1(a,x,y);
}
printf("     ***********\n");
for (x=10,y=10;x>5;x--,y++){
    myfunc1(a,x,y);
}
for (x=5,y=15;x<=10;x++,y--){
    myfunc1(a,x,y);
}
printf("     ***********\n");
myfunc2(a,10);
printf("     ***********\n");
myfunc3(a,10);
printf("     ***********\n");
myfunc4(a,10);
printf("     ***********\n");
myfunc5(a,10);
printf("     ***********\n");
myfunc7(9);
printf("     ***********\n");
myfunc8(26);
    return 0;
}

void myfunc1(char a,int x,int y){

    for (int i = 0; i < x; ++i)
    {
      printf(" ");
    }
    printf("%c",a);
    for (int i=x+1; i < y; ++i)
    {
       //输出中间的空格
       printf(" ");
    }
    if(x<y){
        printf("%c",a);
    }
    printf("\n");
}





void myfunc2(char c,int count){

int i,j;
for ( i = 0; i < count; ++i)
{
    for ( j = 0; j <count-i ; ++j)
    {
        printf(" ");
    }
    for ( j = 0; j < 2*i-1; ++j)
    {
        printf("%c",c );
    }
    printf("\n");
}

}



void myfunc3(char c,int count){

int i,j;
for ( i = count; i >0; --i)
{
    for ( j = count; j >0; --j)
    {
        printf(" ");
    }
    for ( j = 2*i-1; j >0; --j)
    {
        printf("%c",c );
    }
    printf("\n");
}

}




void myfunc4(char c,int count){

int i,j;
for ( i = count; i >0; --i)
{
    for ( j = i; j <count; ++j)
    {
        printf(" ");
    }
    for ( j = 2*i-1; j >0; --j)
    {
        printf("%c",c );
    }
    printf("\n");
}

}



void myfunc5(char c,int count){

int i,j;
for ( i = count; i >0; --i)
{

    for ( j = i; j <count; ++j)
    {
        printf(" ");
    }
    for ( j = (2*i-1)/2; j >0; --j)
    {
        printf("%c",c );
    }

    printf("\n");
}

}




void myfunc6(char c,int count){

int i,j;
for ( i = count; i >0; --i)
{
    for ( j = i; j <count; ++j)
    {
        printf(" ");
    }
    for ( j = 2*i-1; j >0; --j)
    {
        printf("%c",c );
    }
    printf("\n");
}

}


void myfunc7(int count){

int i,j;
for ( i = 0; i < count; ++i)
{
    for ( j = 0; j <count-i ; ++j)
    {
        printf(" ");
    }
    for ( j = 1; j <= i+1; ++j)
    {
        printf("%d",j );
    }
    for ( j = i; j >=1; --j)
    {                             //121
        printf("%d",j );
    }
    printf("\n");
}

}


void myfunc8(int count){

int i,j;
for ( i = 0; i < count; ++i)
{
    for ( j = 0; j <count-i ; ++j)
    {
        printf(" ");
    }
    for ( j = 1; j <= i+1; ++j)
    {
        printf("%c",'a'+j-1);
    }
    for ( j = i; j >=1; --j)
    {                             //aba
        printf("%c",'a'+j-1);
    }
    printf("\n");
}

}







