#include <stdio.h>

int main() {
    int nombre;
    int somme = 0;
    int compteur = 0;
    float moyenne;

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    while (nombre != -1) {
        somme += nombre;
        compteur++;

        printf("Entrez un entier positif : ");
        scanf("%d", &nombre);
    }

    if (compteur > 0) {
        moyenne = (float)somme / compteur;
        printf("La moyenne de ces %d entiers vaut %.6f\n", compteur, moyenne);
    } else {
        printf("Aucun nombre positif n'a été saisi.\n");
    }

    return 0;
}