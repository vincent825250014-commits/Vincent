#include <stdio.h>
#include <string.h>

int main() {
    char pass[50];

    scanf("%s", pass);

    if(strlen(pass) >= 8)
        printf("Password kuat\n");
    else
        printf("Password lemah\n");

    return 0;
}