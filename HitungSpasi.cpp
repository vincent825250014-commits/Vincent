#include <stdio.h>

int main() {
    char teks[100];
    int i, spasi=0;

    scanf(" %[^\n]", teks);

    for(i=0;teks[i]!='\0';i++){
        if(teks[i]==' ')
            spasi++;
    }

    printf("Spasi = %d\n",spasi);
    return 0;
}