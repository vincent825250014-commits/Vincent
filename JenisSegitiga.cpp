#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c)
        printf("Sama sisi\n");
    else if(a==b || b==c || a==c)
        printf("Sama kaki\n");
    else
        printf("Sembarang\n");

    return 0;
}