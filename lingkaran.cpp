#include <stdio.h>

int main(){
    double diameter, jarijari, keliling, luas;
    const double phi = 3.14;

    printf("Masukkan diameter lingkaran: ");
    scanf("%lf", &diameter);

    jarijari = diameter / 2; // rumus jari jari lingkaran
    keliling = phi * diameter; // rumus keliling lingkaran
    luas = phi * jarijari * jarijari;

    printf("Jari-jari lingkaran: %.2f\n", jarijari);
    printf("Keliling lingkaran: %.2f\n", keliling);
    printf("Luas lingkaran: %.2f\n", luas);

    return 0;

}