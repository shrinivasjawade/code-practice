#include<stdio.h>
#include<conio.h>
int na(int a)
{
    if(a==0)
        return 0;
    else
        return(a+na(a-1));
}
int main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    b = na(a);
    printf("%d",b);
    return 0;
}
