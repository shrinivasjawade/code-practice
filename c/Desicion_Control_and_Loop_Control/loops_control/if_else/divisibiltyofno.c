#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the no ");
    scanf("%d",&a);
    printf("enter the no which should be divisible");
    scanf("%d",&b);
    if (a%b==0)
    {
        printf("it is divisible");
    }
    else
    {
        printf("it is not divisible");
    }
    return 0;
}
