#include <stdio.h>

int main() {
    int jam;
    float gaji;

    printf("Jam kerja: ");
    scanf("%d", &jam);

    gaji = jam * 50000;

    if(jam > 40)
        gaji += 100000;

    printf("Gaji = %.2f\n", gaji);
    return 0;
}