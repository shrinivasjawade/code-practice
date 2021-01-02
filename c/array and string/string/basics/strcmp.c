#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("enter the string");
    gets(a);
    gets(b);
    if(strcmp(a,b)==0)
        printf("no is equal");
        else if (strcmp(a,b)>0)
            printf("%s",a);
        else
            printf("%s",b);
}
