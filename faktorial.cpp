#include <stdio.h>

int main() {
    int n, i;
    long faktorial = 1;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        faktorial *= i;
    }

    printf("Faktorial = %ld\n", faktorial);

    return 0;
}