#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter the value of a = ");
scanf("%d",&a);
printf("enter the value of b = ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a after swap =\n %d",a);
printf("\nvalue of b after swap =\n %d",b);
return 0;
}

