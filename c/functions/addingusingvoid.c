#include<stdio.h>
#include<conio.h>
void sum(int a,int b)
{
    int c;
    c = a+b;
    printf("%d",c);
}
void main()
{

    int a,b;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
