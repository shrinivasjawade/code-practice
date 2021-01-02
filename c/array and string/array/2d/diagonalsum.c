#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c[10][10],g,h;
    printf("enter the no of diagonal");
    scanf("%d",&g);
    g=h;
    for(a=0;a<=g-1;a++)
    {
    for(b=1;b<=h-1;b++)
    {
        printf("enter the value");
        scanf("%d",&c[a][b]);
    }
    }
    printf("enter values are as follow");
     for(a=0;a <= g-1;a++)
    {
    for(b=1;b <= h-1;b++)
    {
        printf("%d \t",c[a][b]);
    }
    printf("\n");
}
}
