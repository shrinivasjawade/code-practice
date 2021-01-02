#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c[10][10],e,f;
    printf("enter the no ");
    scanf("%d%d",&e,&f);
    for(a=0;a <=e-1;a++)
    {
        for(b=0; b<=f-1;b++)
        {
           printf(" print the no");
           scanf("%d",&c[a][b]);
        }
    }
    for(a=0;a <=e-1;a++)
    {
        for(b=0; b<=f-1;b++)
        {
           printf(" %d \t",c[a][b]);

        }
        printf("\n");
    }
}
