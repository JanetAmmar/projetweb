#include <stdio.h>

int main() {
    double x, puissance;
    int n, i;

    printf("Entrez un nombre réel x : ");
    scanf("%lf", &x);

    printf("Entrez une puissance n : ");
    scanf("%d", &n);

    if (x==0 && n<=0) {
        printf("Erreur : 0 ne peut pas être élevé à une puissance nulle ou négative.\n");
    } else {
      int abs=n>0?n:-n;
      puissance=1.0;
      for(i=0;i<abs;i++){
        puissance*=x;
      }
      if(n<0) puissance=1.0/puissance;
      printf("%f, puissance");
}
}