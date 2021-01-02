#include<stdio.h>
#include<conio.h>
int main()
{
    int b;
    char a[100];
    printf("enter the string");
    gets(a);
    while (a[b]!= '\0')
    {
        b++;
    }
    printf("total string is %d",b);
}
