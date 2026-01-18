#include <stdio.h>

int main() {
    int a, b, i;
    int sommeA = 0, sommeB = 0;

    printf("Entrer le premier nombre positif : ");
    scanf("%d", &a);

    printf("Entrer le deuxieme nombre positif : ");
    scanf("%d", &b);
    
    if (a <= 0 || b <= 0 || a == b) {
        printf("Les nombres doivent etre positifs et distincts.\n");
        
    }
     // Calcul de la somme des diviseurs de a
    for (i = 1; i < a; i++) {
        if (a % i == 0)
            sommeA += i;
    }

    // Calcul de la somme des diviseurs de b
    for (i = 1; i < b; i++) {
        if (b % i == 0)
            sommeB += i;
    }

    // Vérification des conditions d’amitié
    if (sommeA == b && sommeB == a)
        printf("%d et %d sont des nombres amis.\n", a, b);
    else
        printf("%d et %d ne sont pas des nombres amis.\n", a, b);

    return 0;
}
