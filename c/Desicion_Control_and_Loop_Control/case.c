#include<stdio.h>
int main()
{
float a,b;
int choice;
printf("enter the two no");
scanf("%f",&a);
scanf("%f",&b);
printf("enter your choice \n 1 addition   2 sub \n 3 multi   4 divide");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("addition is %f",a+b);
    break;
    case 2:
    printf("%f",a-b);
    break;
    case 3:
    printf("%f",a*b);
    break;
    case 4:
    printf("%f",a/b);
    break;
};
return 0;
}



