#include <stdio.h>

int main() {
    int Q, G, M, P;

    printf("Donner la quantité commandée : ");
    scanf("%d", &Q);

    G = Q / 100;       // nombre d’emballages de type G
    Q = Q % 100;       // reste après les G

    M = Q / 25;        // nombre d’emballages de type M
    Q = Q % 25;        // reste après les M

    P = Q / 5;         // nombre d’emballages de type P
    Q = Q % 5;         // reste final (ampoules non emballées)

    printf("G = %d, M = %d, P = %d, reste = %d ampoules\n", G, M, P, Q);

    return 0;
}
