#include <stdio.h>

int main() {
    int angka = 7, tebak;

    printf("Tebak angka (1-10): ");
    scanf("%d", &tebak);

    if(tebak == angka)
        printf("Benar!\n");
    else
        printf("Salah!\n");

    return 0;
}