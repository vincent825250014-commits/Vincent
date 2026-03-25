#include <stdio.h>

int main() {
    int jam;
    int biaya;

    scanf("%d",&jam);

    biaya = 2000;
    if(jam > 2)
        biaya += (jam-2)*1000;

    printf("Biaya = %d\n",biaya);
    return 0;
}