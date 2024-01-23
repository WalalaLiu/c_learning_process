#include <stdio.h>

int main()
{
    int a[10] = {1, -2, 3, 4, 5, 2, -7, -9, -10, 14};
    int n, temp;
    n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}