#include <stdio.h>
#include<conio.h>


int main()
{
    int a, b, c, e;
    scanf("%d %d %d %d", &a, &b, &c, &e);
    int ans = max_of_four(a, b, c, e);
    printf("%d", ans);

    return 0;
}
void max_of_four(int p,int q,int r,int s)
{

{
  if((p>q)&&(p>r)&&(p>s))
  {
    printf("%d\n",p);
  }
  else
    {
        if ((q>r) && (q>s))
        {
            printf("%d\n",q);
        }
        else
        {
            if (r>s)
            {
                printf("%d\n",r);
            }
            else
            {
                printf("%d\n",s);

            }
        }
    }
}
}
