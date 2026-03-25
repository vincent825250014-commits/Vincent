#include <stdio.h>

int main() {
    int n, i;
    float nilai[100], max;

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Nilai ke-%d: ", i+1);
        scanf("%f", &nilai[i]);
    }

    max = nilai[0];
    for(i = 1; i < n; i++) {
        if(nilai[i] > max)
            max = nilai[i];
    }

    printf("Nilai terbesar = %.2f\n", max);

    return 0;
}