#include <stdio.h>
#include <math.h>

int main() {
    float A[3], B[3];
    float x, y, m, n;

    // Input vector A
    printf("Masukkan vector A (3 dimensi):\n");
    scanf("%f %f %f", &A[0], &A[1], &A[2]);

    // Input vector B
    printf("Masukkan vector B (3 dimensi):\n");
    scanf("%f %f %f", &B[0], &B[1], &B[2]);

    // Input koefisien untuk a
    printf("\nMasukkan nilai x dan y untuk menghitung xA - yB: ");
    scanf("%f %f", &x, &y);

    printf("Masukkan nilai m dan n untuk menghitung mA + nB: ");
    scanf("%f %f", &m, &n);

    float xa_yb[3], ma_nb[3];
    
    // Hitung xA - yB dan mA + nB
    for(int i=0; i<3; i++){
        xa_yb[i] = x*A[i] - y*B[i];
        ma_nb[i] = m*A[i] + n*B[i];
    }

    printf("\n==== HASIL ====\n");

    // a. xA - yB
    printf("\na. xA - yB = (%.2f, %.2f, %.2f)",
           xa_yb[0], xa_yb[1], xa_yb[2]);

    // a.2 mA + nB
    printf("\n   mA + nB = (%.2f, %.2f, %.2f)",
           ma_nb[0], ma_nb[1], ma_nb[2]);

    // b. Dot product A·B
    float dot = A[0]*B[0] + A[1]*B[1] + A[2]*B[2];
    printf("\n\nb. A · B = %.2f", dot);

    // c. Sudut antara A dan B
    float magA = sqrt(A[0]*A[0] + A[1]*A[1] + A[2]*A[2]);
    float magB = sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);
    float cos_theta = dot / (magA * magB);
    float theta = acos(cos_theta) * 180.0 / M_PI;
    printf("\n\nc. Sudut antara A dan B = %.2f derajat", theta);

    // d. Jarak antara A dan B
    float jarak = sqrt(pow(A[0]-B[0],2) + pow(A[1]-B[1],2) + pow(A[2]-B[2],2));
    printf("\n\nd. Jarak antara A dan B = %.2f", jarak);

    // e. A × B
    float AxB[3] = {
        A[1]*B[2] - A[2]*B[1],
        A[2]*B[0] - A[0]*B[2],
        A[0]*B[1] - A[1]*B[0]
    };

    printf("\n\ne. A × B = (%.2f, %.2f, %.2f)", AxB[0], AxB[1], AxB[2]);

    // f. B × A
    float BxA[3] = {
        B[1]*A[2] - B[2]*A[1],
        B[2]*A[0] - B[0]*A[2],
        B[0]*A[1] - B[1]*A[0]
    };

    printf("\n\nf. B × A = (%.2f, %.2f, %.2f)", BxA[0], BxA[1], BxA[2]);

    // g. ||A × B||
    float magAxB = sqrt(AxB[0]*AxB[0] + AxB[1]*AxB[1] + AxB[2]*AxB[2]);
    printf("\n\ng. ||A × B|| = %.2f", magAxB);

    // h. ||B × A||
    float magBxA = sqrt(BxA[0]*BxA[0] + BxA[1]*BxA[1] + BxA[2]*BxA[2]);
    printf("\n\nh. ||B × A|| = %.2f\n", magBxA);

    return 0;
}