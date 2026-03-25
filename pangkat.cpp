#include <stdio.h>

int main() {
    int a, b, i;
    int hasil = 1;

    printf("Masukkan angka: ");
    scanf("%d", &a);

    printf("Pangkat: ");
    scanf("%d", &b);

    for(i = 0; i < b; i++) {
        hasil *= a;
    }

    printf("Hasil = %d\n", hasil);
    return 0;
}