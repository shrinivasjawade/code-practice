#include<stdio.h>>
#include<conio.h>
int main()
{

int n,i,a[100];
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    printf("enter the no");
    scanf("%d",&a[i]);
}
printf("enter the value\n");
for(i=0;i<=n-1;i++)
{
    printf("%d\n",a[i]);
}
}
