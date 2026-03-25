#include <stdio.h>

int main() {
    float total;

    scanf("%f",&total);

    total += total * 0.1;

    printf("Total bayar = %.2f\n",total);
    return 0;
}