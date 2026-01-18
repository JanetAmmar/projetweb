#include <stdio.h>

int main() {
    int n, i, temp;
    int t[100];

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("Entrer l’élément %d : ", i + 1);
        scanf("%d", &t[i]);
    }

    temp = t[n - 1];

    for (i = n - 1; i > 0; i--) {
        t[i] = t[i - 1];
    }
 
    t[0] = temp;

    printf("\nTableau après rotation à droite d’une position :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");

    return 0;
}
