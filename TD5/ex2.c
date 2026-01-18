#include<stdio.h>
int main() {
   int *p1, *p2;
   p1 = (int *)malloc(sizeof(int));
   p2 = (int *)malloc(sizeof(int));
   printf("Donner deux entiers:\n");
   scanf("%d%d", p1, p2);
   int somme = *p1 + *p2;
   printf("La somme de %d et %d est %d\n", *p1, *p2, somme);
   int aux = *p1;
   *p1 = *p2;
   *p2 = aux;
      printf("Après l'échange, les valeurs sont %d et %d\n", *p1, *p2);
   
}