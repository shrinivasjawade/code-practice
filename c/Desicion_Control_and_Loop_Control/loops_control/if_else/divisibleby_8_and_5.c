#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the value of a");
	scanf("%d",&a);
	do
    {
        printf("");
       }while(a%5==0 && a%8==0);

        if(a=0)
        {
            printf("it is divisible");
        }
        else
        {
            printf("it iss not divisible");
        }
}
