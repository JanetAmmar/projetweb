#include <stdio.h>

int main() {
    int n, i;
    float somme = 0, moyenne;
    int tab[100];
    int max;

    printf("Donner la taille du tableau (<=100) : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Entrer l element %d : ", i + 1);
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    moyenne = somme / n;
    printf("\nLa moyenne des elements est : %.2f\n", moyenne);

    max = tab[0];
    for (i = 1; i < n; i++) {
        if (tab[i] > max)
            max = tab[i];
    }

    printf("La valeur maximale du tableau est : %d\n", max);

    return 0;
}
