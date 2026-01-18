#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double ecartype(int *t, int n)
{
      int i;
      float moyenne=0, somme=0, variance=0, ecartype=0;
      for(i=0; i<n; i++)
      {
          somme += t[i];
      }
      moyenne = somme/n;
      for(i=0; i<n; i++)
      {
          variance += pow(t[i]-moyenne, 2);
      }
      variance = variance/n;
      ecartype = sqrt(variance);
      return ecartype;

}
int main()
{
    int n, i;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);
    int *t = (int*)malloc(n * sizeof(int));
    printf("Entrez les elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &t[i]);
    }
    double result = ecartype(t, n);
    printf("L'ecart type est: %.2f\n", result);
    free(t);
    return 0;
}