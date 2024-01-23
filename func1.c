#include <stdio.h>
void f1()
{
    printf("f1\n");
}
void f2()
{
    printf("f2\n");
}
int main()
{
    char c[100];
    while (1)
    {
        printf("please input a char");
        scanf("%s",&c);
        void (*func_p)();

        switch (c[0])
        {
        case '1':
            func_p = f1;
            break;
        case '2':
            func_p = f2;
            break;

        default:
            printf("are you ok?");
            break;
        }
        func_p();
        func_p=NULL;
    }

    // return 0;
}