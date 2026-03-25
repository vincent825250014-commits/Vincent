#include <stdio.h>
#include <string.h>

int main() {
    char teks[100];

    printf("Masukkan teks: ");
    scanf(" %[^\n]", teks);

    printf("Jumlah karakter = %d\n", strlen(teks));

    return 0;
}