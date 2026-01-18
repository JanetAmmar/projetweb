#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int A[]={1,4,6,8,10}, B[]={2,3,5,7,9}, C[MAX_SIZE];
    int nA=6, nB=5, nC;
    int i = 0, j = 0, k = 0;

    
   //c[K]=A[i]<B[j] ? A[i++]:B[j++];
    while (i < nA && j < nB) {
        if (A[i] < B[j]) {
            C[k] = A[i] , i++;
        } else {
            C[k] = B[j], j++;
        }
        k++;
    }

    
    while (i < nA) {
        C[k++] = A[i++];
    }

    
    while (j < nB) {
        C[k++] = B[j++];
    }

    nC = k;

    
    printf("\nTableau C (fusion triée) :\n");
    for (i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
