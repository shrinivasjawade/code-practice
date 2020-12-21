#include<stdio.h>
#include<conio.h>

int add (int g,int h)
{
    int sum;
    sum=g+h;
	return sum;
}
int main()
{
int a,b,c;
int add(int g,int h);
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
c=add(a,b);
printf("enter the value %d",c);
return 0;
}
