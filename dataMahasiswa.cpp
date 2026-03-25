#include <stdio.h>

int main() {
    char nama[50], nim[15], jurusan[50];

    printf("Masukkan Nama: ");
    scanf(" %[^\n]", nama);

    printf("Masukkan NIM: ");
    scanf("%s", nim);

    printf("Masukkan Jurusan: ");
    scanf(" %[^\n]", jurusan);

    printf("\nData Mahasiswa:\n");
    printf("Nama     : %s\n", nama);
    printf("NIM      : %s\n", nim);
    printf("Jurusan  : %s\n", jurusan);

    return 0;
}