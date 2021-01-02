#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a[100],x;
    int flag=False;
    printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the value \n");
        scanf("%d",&a[i]);
    }

printf("enter the no are as follow \n");

for(i=1;i<=n;i++)
{
    printf("values are %d \n",a[i]);

}
printf("enter the no u want to search");
scanf("%d",&x);
for(i=1;i<=n;i++)
{
    if(x == a[i])
    {
    is_found = true;
    }


}
}
if (is_found == True)
{
    printf("number is true");
}
else
{
    printf("no not found")
}
