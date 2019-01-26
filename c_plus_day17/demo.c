/*
* @Author: Yunda
* @Date:   2019-01-26 17:30:49
* @Last Modified by:   Marte
* @Last Modified time: 2019-01-26 18:46:06
*/

#include <stdio.h>

int main() {

int myfunction1(int year,int mouth,int day);
int myfunction2(int year,int mouth,int day);
int myfunction3(int year,int mouth,int day);
int myfunction4(int year,int mouth,int day);


int year,mouth,day,days,days1,days2,days3;
printf("Enter your year:\n");
scanf("%d",&year);
printf("Enter your mouth:\n");
scanf("%d",&mouth);
printf("Enter your day:\n");
scanf("%d",&day);
days  = myfunction1(year,mouth,day);
days1 = myfunction2(year,mouth,day);
days2 = myfunction3(year,mouth,day);
days3 = myfunction3(year,mouth,day);


printf("The %dyears%dmouths%dday is %d\n",year,mouth,day,days);
printf("The %dyears%dmouths%dday is %d\n",year,mouth,day,days1);
printf("The %dyears%dmouths%dday is %d\n",year,mouth,day,days2);
printf("The %dyears%dmouths%dday is %d\n",year,mouth,day,days3);



    return 0;
}



/**
 * [myfunction1 acquire the days mark number]
 * @param  year  [ideal year]
 * @param  mouth [idea mouth]
 * @param  day   [idea day]
 * @return       [the mark number]
 */
int myfunction1(int year,int mouth,int day){
int days=0;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//做判断 如果是平年28天，闰年29天
if((year%4==0)||(year%400!=0)){
    //说明是闰年 将天数改为29
    a[1]=29;
}
for (int i = 0; i < mouth-1; ++i)    //注意循环的次数问题
{
   days = days + a[i];
}

days = days + day;
return days;
}


/**
 * [myfunction1 acquire the days mark number]
 * @param  year  [ideal year]
 * @param  mouth [idea mouth]
 * @param  day   [idea day]
 * @return       [the mark number]
 */
int myfunction2(int year,int mouth,int day){
int days=0;
//平年数组
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//闰年数组
int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int flag=0; //默认是平年

//做判断分析
if((year%4==0)||(year%400!=0)){
    //说明是闰年 将天数改为29
    flag = 1; //标志位置为1 说明为闰年
}
if(flag){  //使用闰年的数组

for (int i = 0; i < mouth-1; ++i)    //注意循环的次数问题
{
   days = days + b[i];
}
}
else      //使用平年的数组
{
for (int i = 0; i < mouth-1; ++i)    //注意循环的次数问题
{
   days = days + a[i];
}
}

days = days + day;
return days;
}



/**
 * *********switch function *********
 * [myfunction1 acquire the days mark number]
 * @param  year  [ideal year]
 * @param  mouth [idea mouth]
 * @param  day   [idea day]
 * @return       [the mark number]
 */
int myfunction3(int year,int mouth,int day){
int days=0;
//平年数组
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//闰年数组
int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int flag=0; //默认是平年

//做判断分析
if((year%4==0)||(year%400!=0)){
    //说明是闰年 将天数改为29
    flag = 1; //标志位置为1 说明为闰年
}
switch(flag){

case 0:
for (int i = 0; i < mouth-1; ++i)    //注意循环的次数问题
{
   days = days + a[i];
}
break;

case 1:
for (int i = 0; i < mouth-1; ++i)    //注意循环的次数问题
{
   days = days + b[i];
}
break;
}

days = days + day;
return days;
}

/**
 * *********switch function *********
 * [myfunction1 acquire the days mark number]
 * @param  year  [ideal year]
 * @param  mouth [idea mouth]
 * @param  day   [idea day]
 * @return       [the mark number]
 */
int myfunction4(int year,int mouth,int day){
int days=0;
int flag=0; //默认是平年

//做判断分析
if((year%4==0)||(year%400!=0)){
    //说明是闰年 将天数改为29
    flag = 1; //标志位置为1 说明为闰年
}
switch(mouth){

case 12: days+=30;
case 11: days+=31;
case 10: days+=30;
case 9: days+=31;
case 8: days+=31;
case 7: days+=30;
case 6: days+=31;
case 5: days+=30;
case 4: days+=31;
case 3: days+=28+flag;
case 2: days+=31;
case 1: days+=0;
}
days = days + day;
return days;
}

