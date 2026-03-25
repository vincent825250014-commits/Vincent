#include <stdio.h>

struct Buku {
    char judul[50];
    int harga;
};

int main() {
    struct Buku b[3];
    int i;

    for(i=0;i<3;i++){
        scanf(" %[^\n]",b[i].judul);
        scanf("%d",&b[i].harga);
    }

    for(i=0;i<3;i++){
        printf("%s - %d\n",b[i].judul,b[i].harga);
    }

    return 0;
}