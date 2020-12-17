///finding TA , DA ,GROSS///
#include<stdio.h>
int main()
{

    float a;
    printf("what's the salary");
    scanf("%f",&a);
    printf("value of DA is %f \n",a*5/100);
    printf("value of TA is %f \n",(a*15/100));
    printf("total gross value %f",(a*15/100) + (a*5/100));
    return 0;
}
