#include <stdio.h>

int main(){
    float sisi, luas, volume;

    printf("Masukkan panjang sisi kubus: ");
    scanf("%f", &sisi);

    luas = 6 * sisi * sisi; // rumus luas kubus
    volume = sisi * sisi * sisi; // rumus volume kubus 

    printf("Luas Kubus: %.2f\n", luas);
    printf("Volume Kubus: %.2f\n", volume);

    return 0;
}