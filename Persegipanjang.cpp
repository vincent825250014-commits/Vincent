#include <stdio.h>

int main(){
    float panjang, lebar, luas, keliling;

    printf("Masukkan panjang dari persegi panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar dari persegi panjang: ");
    scanf("%f", &lebar);

    luas = panjang * lebar; // rumus luas
    keliling = 2 * (panjang + lebar); // rumus keliling

    printf("Luas Persegi Panjang: %.2f\n", luas);
    printf("Keliling Persegi panjang: %2.f\n", keliling);

    return 0;

}