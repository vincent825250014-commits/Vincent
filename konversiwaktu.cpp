#include <stdio.h>

int main() {
    int detik, jam, menit;

    printf("Masukkan detik: ");
    scanf("%d", &detik);

    jam = detik / 3600;
    menit = (detik % 3600) / 60;

    printf("%d jam %d menit\n", jam, menit);

    return 0;
}