#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
printf("enter the no");
scanf("%d",&a);
c=0;
while(a!=0)
{
  b=a%10;
  c=c+b;
  a=a/10;
}
printf("value is %d\n",c);
}
