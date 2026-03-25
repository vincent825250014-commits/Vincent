#include <stdio.h>

int main() {
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if((a>=b && a<=c)||(a<=b && a>=c))
        printf("Median = %d\n",a);
    else if((b>=a && b<=c)||(b<=a && b>=c))
        printf("Median = %d\n",b);
    else
        printf("Median = %d\n",c);

    return 0;
}