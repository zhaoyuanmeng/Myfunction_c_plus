/*
* @Author: Marte
* @Date:   2019-01-20 14:20:12
* @Last Modified by:   Marte
* @Last Modified time: 2019-01-20 14:40:25
*/

#include <stdio.h>

int a[3];  //全局变量

int main() {
void myfunction1(int n);
void myfunction2(int n);
void myfunction3(int n);
void myfunction4(int n);


myfunction1(12);
for (int i = 0; i < 3; ++i)
{
    printf("%d\n",a[i] );
}
printf("*****************\n");
myfunction2(123);
printf("\n*****************\n");
myfunction3(123);
printf("\n*****************\n");
myfunction4(123);

    return 0;
}




void myfunction1(int n){
    int i;
    static int j=0;
    if(i=n/10){
        a[j++]=n%10;
        myfunction1(n/10);
    }
    else{
        a[j++]=n%10;
    }
}

void myfunction2(int n){
    int i;
    if(i=n/10){
        myfunction2(n/10);
    }
    printf("%d",n%10);
}

void myfunction3(int n){
    int i;
    printf("%d",n%10);
    if(i=n/10){
        myfunction3(n/10);
    }
}

void myfunction4(int n){
    int i;
    printf("%d",n%10);
    if(i=n/10){
        myfunction4(n/10);
    }
    printf("%d",n%10);
}