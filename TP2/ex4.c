#include<stdio.h>
int main() {
      int A, B, C,milieu;
      printf("entrer A,B,C: ");
      scanf("%d%d%d", &A, &B, &C);
      
      if((B>A && A<C)||(A>C && A<B))
      {
            milieu=A; 
      }
      else 
            if((B>A && B<C)||(B>C && B<A))
            {
                  milieu=B;
            }
            else
                  milieu=C;

                  
      printf("%d est le mmilieu",milieu);
}