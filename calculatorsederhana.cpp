#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);

    printf("Masukkan operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    if (op == '+')
        printf("Hasil = %.2f\n", a + b);
    else if (op == '-')
        printf("Hasil = %.2f\n", a - b);
    else if (op == '*')
        printf("Hasil = %.2f\n", a * b);
    else if (op == '/')
        printf("Hasil = %.2f\n", a / b);
    else
        printf("Operator tidak valid\n");

    return 0;
}