#include <stdio.h>

int main() {
    int a, racine = 0, impair = 1;

    do {
        printf("Entrer un entier positif : ");
        scanf("%d", &a);
    } while (a <= 0);
    int n = a;
    while (a >= impair) {
        a -= impair;
        impair += 2;
        racine++;
    }

    printf("La racine carree entiere de %d est : %d\n", n, racine);

    return 0;

    
}
//double Un,Un1,a,eps=1e-6;
//scanf("%lf",&a);
//Un1=1;
//do{
//      Un1=Un;
//      Un=(Un1+a/Un1)/2;
//}while(fabs(Un-Un1)>eps);
//printf("la racine carree de %.2f est %.6f",a,Un);