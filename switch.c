#include<stdio.h>
int main()
{
    char c;
    printf("please input a char\n");
    c=getchar();

    switch (c)
    {
    case'1':
        printf("ok\n");
        break;
    case'2':
        printf("not ok\n");
        break;
    
    default:
        printf("are you ok?");
        break;
    }
    return 0;
}