#include <stdio.h>

int main() {
    float nilai;

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if(nilai >= 60)
        printf("Lulus\n");
    else
        printf("Tidak Lulus\n");

    return 0;
}