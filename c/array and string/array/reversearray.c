#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c[100];
    printf("enter the total");
    scanf("%d",&b);
    for(a=0;a <= b-1;a++)
    {
        printf("enter the value :");
        scanf("%d",&c[a]);
    }
    printf("enter he value \n");
     for(a= b;a >= 0;--a)
    {
        printf("%d \n",c[a]);
    }
    return 0;
}
