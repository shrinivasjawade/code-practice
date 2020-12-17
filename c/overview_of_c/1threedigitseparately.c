///write a program to display  a three digit no separately///
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d;
    printf("enter three digit no ");
    scanf("%d",&a);
    b = a%10;
    c=(a/10)%10;
    d=a/100;
    printf("enter the value \n %d \n %d \n %d ",b,c,d);
}

