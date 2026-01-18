#include<stdio.h>
int main() {
     int A, B, C,aux;
     printf("entrer A,B,C: ");
      scanf("%d%d%d", &A, &B, &C);
      if(A>B){
              aux=A; A=B; B=aux; 
      }else if (A>C){
              aux=A; A=C; C=aux;
      } else
            
           if (B>C){
              aux=B; B=C; C=aux;
      }
      printf("l'ordre croissant est %d %d %d\n", A, B, C);
      return 0;
      
}