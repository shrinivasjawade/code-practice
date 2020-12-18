#include<stdio.h>
#include<conio.h>
int main()
{

int a,b;
printf("enter the value of b");
scanf("%d",&b);
    printf("odd no     even no\n");
for(a=1;a<=b;a++)
{
    printf("%d           %d\n",a++,++a);
}

return 0;
}
