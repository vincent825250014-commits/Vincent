#include <stdio.h>

int main() {
    int pilih;
    float a, b;

    printf("1. Persegi\n2. Segitiga\nPilih: ");
    scanf("%d", &pilih);

    if(pilih == 1) {
        scanf("%f", &a);
        printf("Luas = %.2f\n", a*a);
    } else if(pilih == 2) {
        scanf("%f %f", &a, &b);
        printf("Luas = %.2f\n", 0.5*a*b);
    }

    return 0;
}