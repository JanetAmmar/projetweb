#include <stdio.h> 
void permuter(int *a, int *b) 
{
    int aux = *a;
      *a = *b;
      *b = aux;
}
void inverser(int *T, int n) 
{
    for (int i = 0; i < n / 2; i++) 
    {
        permuter(T+i, T+n-i-1);
    }

}
int main()
{
      int a,b;
      a=3;b=5;
      permuter(&a,&b);
      printf("a=%d b=%d\n",a,b);
      int  V[]={2,3,4,5,6,8,7};
      inverser(V,7);
      for(int i=0;i<7;i++)
          printf("%d ",V[i]);
      
}
