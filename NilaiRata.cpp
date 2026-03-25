#include <stdio.h>

int main() {
    float nilai1, nilai2, nilai3, rata;

    printf("Masukkan 3 nilai:\n");
    scanf("%f %f %f", &nilai1, &nilai2, &nilai3);

    rata = (nilai1 + nilai2 + nilai3) / 3;

    printf("Rata-rata = %.2f\n", rata);

    return 0;
}