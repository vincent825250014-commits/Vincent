#include <stdio.h>

int main() {
    int harga, jumlah, total;

    printf("Masukkan harga barang: ");
    scanf("%d", &harga);

    printf("Masukkan jumlah: ");
    scanf("%d", &jumlah);

    total = harga * jumlah;

    printf("Total bayar = %d\n", total);

    return 0;
}