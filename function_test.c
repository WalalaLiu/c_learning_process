#include<stdio.h>
void max(int a,int b);
int main()
{
    int a=9,b=5,num_max=0;
    max(a,b);
    return 0;
}

void max(int a,int b)
{
    printf("%d\n",( a>b?a:b));
}