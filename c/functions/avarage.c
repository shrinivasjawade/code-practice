#include<stdio.h>
#include<conio.h>
int avg (int a,int b,int c)
{
    int d;
    d=a/3+b/3+c/3;
    return c;
}
int main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    c=avg(a,b,c);
    printf("average is %d",c);
    return 0;
}
