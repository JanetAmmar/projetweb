 #include<stdio.h>
 int main(){
      int *p;
      int n,i,min;
      printf("Donner le nombre d'éléments du tableau:\n");
      scanf("%d",&n);
      p = (int *)malloc(n * sizeof(int));
      printf("Donner les éléments du tableau:\n");
      for(i=0;i<n;i++){
              scanf("%d", &p[i]);
        }
      for(int*ptr = p; ptr < p + n; ptr++){
          scanf("%d", ptr);
      for(int*ptr = p; ptr < p + n; ptr++){
            printf("%d ", *ptr);
      }
      int ps_min = 0;
      for(int i=p; i<n; i++){
            if(p[i] < p[ps_min]){
                  ps_min = i;
            }
            
      
      }
      printf("%p\n", &p[ps_min]);

 }
}