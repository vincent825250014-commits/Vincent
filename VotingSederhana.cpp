#include <stdio.h>

int main() {
    int suara[3]={0}, i, pilih;

    for(i=0;i<5;i++){
        scanf("%d",&pilih);
        suara[pilih-1]++;
    }

    printf("Hasil:\n");
    for(i=0;i<3;i++)
        printf("Calon %d = %d\n",i+1,suara[i]);

    return 0;
}