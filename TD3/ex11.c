#include <stdio.h>
#include <math.h>

int main() {
    double U0 = 1, U1 = 2, U2, V1, V2, epsilon;


    printf("Entrer la valeur de epsilon (precision) : ");
    scanf("%lf", &epsilon);

    V1 = U1 / U0;  // premier rapport
    U2 = U1 + U0;
    V2 = U2 / U1;  

    // Boucle jusqu'à ce que la différence soit inférieure à epsilon
    while (fabs(V2 - V1) > epsilon) {
        U0 = U1;
        U1 = U2;
        U2 = U1 + U0;   // U(n) = U(n-1) + U(n-2)
        V1 = V2;
        V2 = U2 / U1;   // V(n) = U(n) / U(n-1)
    }

    printf("Valeur approchee du nombre d'or : %.15f\n", V2);
    printf("Precision atteinte : %.15f\n", fabs(V2 - V1));

    return 0;
}
//do {
//      V0 = V1;}
//      U2 = U1 ;
//