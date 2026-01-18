#include <stdio.h>

int main() {
    int n, i;
    int Un,Un_1,Un_2;
    do
    {
            printf("Entrez la valeur de n : ");
            scanf("%d", &n);
    } while (n<0);
    Un=Un_1=Un_2=1;
      for(i=3;i<=n;i++){
            Un=Un_1+Un_2;
            Un_2=Un_1;
            Un_1=Un;
      }
      printf("Le terme U(%d) de la suite de Fibonacci vaut %d\n",n,Un);
      return 0;  
}
