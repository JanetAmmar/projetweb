#include <stdio.h>
#include <stdlib.h>
int main(){
      int i,j,n,**M,l;
      srand[10];
      do {
            printf("Donner la taille de la matrice carree: ");
            scanf("%d",&n);
      }while (n<=0);
      M=(int**) malloc(n*sizeof(int*));
      for(i=0;i<n;i++){
            M[i]=(int*) malloc(n*sizeof(int));
      }
      for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                  M[i][j]=rand()%10; 
            }
      }
}