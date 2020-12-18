#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("which table is needed =");
scanf("%d",&b);
for (a=1;a<=10;a++)
{
    printf("%d*%d=%d\n",b,a,(b*a));

}
return 0;
}
