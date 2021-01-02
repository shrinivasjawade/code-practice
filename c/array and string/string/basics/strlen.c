#include<stdio.h>
#include<conio.h>
void main()
{
    int q ;
    char a[100];
    printf("enter the string\n");
    gets(a);
    q = strlen(a);
    printf("enter string is:- %s\n",a);
    printf("total string is %d \n",q);
}
