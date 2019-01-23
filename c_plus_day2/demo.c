#include <stdio.h>
int main(void)
{
    int myfunc1(char *name);
    int myfunc2(char *name);
    void myfunc3(char *name1, char *name2);
    int myfunc4(char *name1, char *name2);
    void myfunc5(char *name1, char *name2);

    char name1[100] = "ab";
    char *name2 = "a";
    int flag;
    flag = myfunc4(name1, name2);
    if (flag)
    {
        if (flag > 0)
        {
            printf("First is above Second");
        }
        else
        {
            printf("First is below Second");
        }
    }
    else
    {
        printf("First equal Second");
    }
    myfunc5(name1, name2);
    printf("\nThis newstrings  is %s ", name1);
}

/*****************FIVE FUNCTIONS IS BELOW HERE**************/

/*
    @param 这是一个自己定义的函数用来模拟strlen函数
    @param 它的参数只有一个 就是数组的名称
    @param 这个函数经过我的测试了哦！！！

*/
/*********** 没有用指针的方式测量字符串的个数 *********/
int myfunc1(char *name)
{
    int i = 0;
    int count = 0;
    while (name[i++])
    {
        count++;
    }
    return count;
}
/*********** ENDS *********************/

/*
    @param 这是一个自己定义的函数用来模拟strlen函数
    @param 它的参数只有一个 就是数组的名称
    @param 这个函数经过我的测试了哦！！！
*/

/*********** 用指针的方式测量字符串的个数 *********/
int myfunc2(char *name)
{
    char *p = name;
    int count = 0;
    while (*p++)
    {
        count++;
    }
    return p - name - 1;
}
/*********** ENDS *********************/

/*
    @param 这是一个自己定义的函数用来模拟strcrat函数
    @param 它的参数有两个 都是数组的名称也就是地址
    @param 她可没有返回值哦
    @param 这个函数经过我的测试了哦！！！
*/
/*********** 将两个字符拼接到一块 *********/
void myfunc3(char *name1, char *name2)
{

    char *p = name1;
    while (*p++)
    {
    }
    p = p - 1;
    while ((*p++) = (*name2++))
    {
    }
    //这里用不着加都可以 *(p-1)='\0';
}
/***********    ENDS            *********/

/***********
    @param 这是一个自己定义的函数用来模拟strcmp函数
    @param 它的参数有两个 都是数组的名称也就是地址
    @param 它的返回值是一个整数而且返回的是第一个数组减去第二个数组的值
    @param 这个函数经过我的测试了哦！！！
*/

/***********      STRCMP函数  *********/
int myfunc4(char *name1, char *name2)
{

    int i = 0;
    while ((name1[i] && name2[i]) != '\0')
    {
        if (name1[i] != name2[i])
        {
            break;
        }
        else
            i++;
    }
    return name1[i] - name2[i];
}
/***********        ENDS        *********/

/*
    @param 这是一个自己定义的函数用来模拟strcpy函数
    @param 它的参数有两个 都是数组的名称也就是地址
    @param 这个函数没有返回值直接调用就可以了 把赋值的函数写到一个数组里所以第一个数组尽量大一些
    @param 已经亲自测试过没有问题哦！！！
*/

/*********** STRCPY函数 *********/
void myfunc5(char *name1, char *name2)
{

    while ((*name1++ = *name2++) != 0)
    {
    }
    //*--name1 = '\0';
}
/***********  ENDS      *********/
