#include <stdio.h>
#include <stdlib.h>
int main(){
      int *T,*pl,*pe,n;
      do {
            printf("Donner la taille du tableau: ");
            scanf("%d",&n);
      }while (n<=0);
      T=(int*) malloc(n*sizeof(int));
      //Allocation dynamique du tableau T
      for(int *p=T;p<T+n;p++){
            printf("Donner une valeur entiere: ");
            scanf("%d",p);
      }

      //Decodage de valeurs non null dans le tableau T
      for (pe=T, pl=T ;pl<T+n;pl++){
            if(*pl!=0){
                  *pe=*pl;
                  pe++;
            }
      }
      for( ;pe<T+n;pe++){
            *pe=0;
      }
} 