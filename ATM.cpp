#include <stdio.h>

int main() {
    int saldo = 1000000, pilih, jumlah;

    printf("1. Cek Saldo\n2. Tarik\n");
    scanf("%d", &pilih);

    if(pilih == 1)
        printf("Saldo = %d\n", saldo);
    else if(pilih == 2) {
        scanf("%d", &jumlah);
        if(jumlah <= saldo) {
            saldo -= jumlah;
            printf("Sisa saldo = %d\n", saldo);
        } else {
            printf("Saldo tidak cukup\n");
        }
    }

    return 0;
}