#include <stdio.h>

int main() {
    int n, i;
    int tab[100];

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Entrer l element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\n Tableau inverse :\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
