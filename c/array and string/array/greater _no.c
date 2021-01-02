#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
 int max_of_four(int a,int b,int c,int d)
 {
        int h  ,g;
        h =(a>b)?((a>c)?a:c):((b>c)?b:c);
        g=((h>d)?h:d);

        return g;

 }

