/*
* @Author: YUANDA
* @Date:   2018-12-30 15:30:37
* @Last Modified by:   Marte
* @Last Modified time: 2018-12-30 16:14:40
*/

#include <stdio.h>

int main() {
    int myfun1(int n);
    void myfun2();
    void myfun3();
    void myfun4();
    myfun4();
    myfun3();
    // myfun2();
    // int type;
    // type = myfun1(3);
    // printf("Number is %d\n",type);
    return 0;
}


int myfun1(int n){
    if(n==1||n==2){
        return 1;
    }else{
        return myfun1(n-1)+myfun1(n-2);
    }
}

void myfun2(){


    int a[10] = {1,1};
    int i;
    for(i=2;i<=10;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<=10;i++){
        printf("%d\n",a[i]);
    }
}

void myfun3(){
    int f1=1,f2=1;
    int f3;
    int i;
    for(i=0;i<=5;i++){
        f3 = f1+f2;
        f1=f2;
        f2=f3;
        printf("%d\n",f3);
    }
}

void myfun4(){
    int f1=1,f2=1;
   // int f3;
    int i;
    for(i=0;i<=5;i++){
        f1 = f1+f2;
        f2 =f1+f2;
        printf("%d\n",f1);
        printf("%d\n",f2);
    }
}

void myfun5(){


}


