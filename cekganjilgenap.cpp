#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (angka % 2 == 0)
        printf("Bilangan Genap\n");
    else
        printf("Bilangan Ganjil\n");

    return 0;
}