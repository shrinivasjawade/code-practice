///swapping no ///
#include<stdio.h>
int main()
{
int  a,b,c;
printf("enter the value of a =");
scanf("%d",&a);
printf("enter the value of b =");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("value after swap of a = %d",a);
printf("value after swap of b = %d",b);
return 0;
}
