#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c[100];
    printf("enter the totoal no");
    scanf("%d",&b);

    for(a=0;a<=b-1;a++)
    {
         printf("enter the value \n ");
        scanf("%d",&c[a]);
    }
    printf("values are ");
    for(a=0;a<=b-1;a++)
    {
        printf("%d\n",c[a]);
    }
}
