#include <stdio.h>
void zifuzhizheng()
{
    char str[] = "hello world";
    char *p = str;
    *p = 'm';
    p++;
    *p = 'i';
    printf("%s\n", str);

    p = "mike jiang";
    printf("%s\n", p);

    char *q = "test";
    printf("%s\n", q);
}

void mystrcat(char *dest, const char *src)
{
    int len1 = 0, len2 = 0;
    while (dest[len1])
    {
        len1++;
    }
    while (src[len2])
    {
        len2++;
    } // 前两步都是用来统计两个数组的长度；
    int i;
    for (i = 0; i < len2; i++)
    {
        dest[len1 + i] = src[i];
    } // 把src的字符接在dest的后面；



}
int main(int argc,char*argv[])//argc:传参数的个数（包含可执行程序） argv：指针数组，指向输入的参数
{
    //zifuzhizheng();
    /*char dst[100]="hello mike";
    char src[]="123456";

    mystrcat(dst,src);
    printf("des=%s\n",dst);*/
    char *a[]={"aaaaaaa","bbbbbbbb","cccccccc"};
    int i=0;
    printf("argc=%d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}