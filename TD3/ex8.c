#include <stdio.h>

int main() {
    int n, compteur = 0;

    do {
        printf("Entrer un entier strictement positif : ");
        scanf("%d", &n);
    } while (n <= 0);


    printf("Suite de Syracuse : ");
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d ", n);
        compteur++;
    }

    
    printf("\n Le nombre de transformations necessaire avant d'arriver a 1 est : %d\n", compteur);

    return 0;
}
