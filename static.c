#include<stdio.h>
void fun1()
{
    int i=0;
    i++;
    printf("i=%d\n",i);
}
void fun2()
{
    static int a;
    a++;
    printf("a=%d\n",a);
}

int main()
{
    fun1();
    fun1();
    fun2();
    fun2();
    return 0;//static局部变量的生命周期和程序运行周期一样；
}
/*所有的函数默认都是全局的，意味着所有的函数都不能重名，
但如果是static函数，那么作用域就是文件级别的，所以不同文件的static函数名可以是相同的*/
