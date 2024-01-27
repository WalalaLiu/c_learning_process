#include<stdio.h>

struct stu
{
    char name[50];
    int age;
};
int main()
{
    struct stu s1={"lily",18};
    struct stu *p=&s1;
    printf("(*p).name=%s,(*p).age=%d\n",(*p).name,(*p).age);  
}