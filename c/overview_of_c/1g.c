///greater between three no///
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,e;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    e=(a>b)?((b>c)?b:c):((c>a)?c:a);
    printf("greater value among three is = %d",e);
 }
