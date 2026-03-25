#include <stdio.h>

int main() {
    int umur;

    scanf("%d",&umur);

    if(umur < 13) printf("Anak-anak\n");
    else if(umur <= 18) printf("Remaja\n");
    else printf("Dewasa\n");

    return 0;
}