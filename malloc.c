#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int count, *array, n;
    printf("请输入要申请的数组的个数：\n");
    scanf("%d", &n);

    array = (int *)malloc(n * sizeof(int));
    if (array == NULL)
    {
        printf("申请空间失败！\n");
        return -1;
    }
    memset(array, 0, sizeof(int) * n);//void *memset(void *s,int c,size_t n);将s的内存区域的前n个字节以参数c填入
    for (count = 0; count < n; count++)
    {
        array[count] = count;
    }
    for (count = 0; count < n; count++)
    {
        printf("%2d", array[count]);
    }
    free(array);
    return 0;
}
