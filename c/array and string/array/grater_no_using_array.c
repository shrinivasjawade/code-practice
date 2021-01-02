#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c[100],e;

    printf("enter the no ");
    scanf("%d", &b);
    for (a=0;a <= b-1;a++)
    {
        printf("enter the value");
    scanf("%d",&c[a]);
    }
    e=c[0];
       for (a=1;a <= b-1;++a)
     {
         if (e < c[a])
        e=c[a];
     }

         printf("%d",e);
}
