#include<stdio.h>
 
void swap1(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d,y=%d\n",x,y);
}

void swap2(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d,y=%d\n",*x,*y);
}

int main()
{
    int a=3,b=5;
    swap1(a,b);
    swap2(&a,&b);
    return 0;
}