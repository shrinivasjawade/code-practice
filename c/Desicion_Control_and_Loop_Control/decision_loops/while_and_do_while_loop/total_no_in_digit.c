#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    a=35246515615;
    i=0;
    while(a!=0)
    {
        a=a%10;
        b=i+a;
        a=a/10;
        i++;
    }
    printf("%d",b);
}
