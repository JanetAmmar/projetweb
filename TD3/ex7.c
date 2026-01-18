#include <stdio.h>
int main() {
      int n,a,premier,compteur;
      do{
            printf("entrer n: ");
            scanf("%d", &n);
      }while(n<=5);
      a=2;
      compteur=0;
      do{
            premier=1;
            for(int i=2;i<=a/2;i++){
                  if(a%i==0){
                        premier=0;
                        break;
                  }
            }
            if(premier==1){
                  printf("-4%d ",a);
                  compteur++;
            }
            a++;
      }while(compteur!=n);

}
//tous nombres premiers= 6K+1 mais 6K+1 nest pas forcement premier
//tous nombres premiers= 6K-1 mais 6K-1 nest pas forcement premier