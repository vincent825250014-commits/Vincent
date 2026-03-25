#include <stdio.h>

int main() {
    int A[2][2], i,j, total=0;

    for(i=0;i<2;i++)
        for(j=0;j<2;j++){
            scanf("%d",&A[i][j]);
            total += A[i][j];
        }

    printf("Total = %d\n",total);
    return 0;
}