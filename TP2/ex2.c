#include<stdio.h>
int main() {
      int A, B, C,max;
      printf("entret A,B,C: ");
      scanf("%d%d%d", &A, &B, &C);
      if((A>B)&&(A>C)){
          max=A; 
      } else if((B>C)){
          max=B;
      } else {
          max=C;
          printf("le max est %d\n", max);
      } }