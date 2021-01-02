#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c[100],e,h,i;
    printf("enter the size of array");
    scanf("%d",&a);
    for(b=0;b <= a-1;b++)
    {
       printf(" enter the no \n ");
       scanf("%d",&c[b]);
    }
   for(b=0;b <= a-1;b++)
   {
       printf("value is %d \n",c[b]);
   }
printf("enter the no to be search");
scanf("%d",&e);
  for(b=0;b >= a-1;b++)
  {
      if( e == c[b])
      {
          i=c[b];
          h=1;
      }
  }
if(h=1)
{
    printf("no enter is %d",i);
}
else
{
    printf("enter no is not found");
}
}

