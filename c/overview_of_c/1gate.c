///finding logic and gate of two no.///
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("and gate %d\n",(a&b));
    printf("or gate  %d\n",(a|b));
    printf("not gate is a %d\n",(~a));
    printf("not gate is b %d\n",(~b));
    printf("exor gate b is %d\n",(a^b));
    return 0;
}
