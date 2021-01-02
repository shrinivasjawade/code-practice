#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter the string for a");
gets(a);
printf("enter the string for b");
gets(b);
strcpy(b,a);
printf("%s  \n",a);
printf("%s",b);
}
