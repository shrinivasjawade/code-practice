#include<stdio.h>
#include<conio.h>
int a,b,c[100],sum,e;
float q;
int main()
{
    e=0;
    printf("enter the no ");
    scanf("%d",&a);
    for (b=0;b<=a-1;b++)
    {
        printf("value is \n");
        scanf("%d",&c[b]);
        sum +=c[b];
    e++;
    }
    printf("values are \n ");
     for (b=0;b<=a-1;b++)
     {
         printf("values are %d \n",c[b]);

     }
    q=sum/e;
    printf("average of no is %f",q);
    return 0;
}
