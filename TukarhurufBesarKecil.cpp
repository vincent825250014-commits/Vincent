#include <stdio.h>

int main() {
    char teks[100];
    int i;

    scanf(" %[^\n]", teks);

    for(i = 0; teks[i] != '\0'; i++) {
        if(teks[i] >= 'a' && teks[i] <= 'z')
            teks[i] -= 32;
        else if(teks[i] >= 'A' && teks[i] <= 'Z')
            teks[i] += 32;
    }

    printf("%s\n", teks);
    return 0;
}