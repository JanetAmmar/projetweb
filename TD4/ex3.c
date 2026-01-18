#include <stdio.h>

int main() {
    int n, i, j, x, count = 0;
    int tab[100];

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Entrer l element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Donner la valeur de x : ");
    scanf("%d", &x);


    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            count++;
            printf("x trouvé à la position %d\n", i);
        }
    }
    printf("x apparaît %d fois\n", count);

    
    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            for (j = i; j < n - 1; j++)
                tab[j] = tab[j + 1];
            n--;
            break;
        }
    }

    printf("\n Apres suppression de la première occurrence :\n");
    for (i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");


    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            for (j = i; j < n - 1; j++)
                tab[j] = tab[j + 1];
            n--;
            i--;
        }
    }

    printf("\n Apres suppression de toutes les occurrences :\n");
    for (i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
