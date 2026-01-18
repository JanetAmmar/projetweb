#include<stdio.h>
void min_max(int *T, int n, int *min, int *max) 
{
    *min = *max = T[0];
    for (int i = 1; i < n; i++) 
    {
        if (T[i] < *min) 
            *min = T[i];
        if (T[i] > *max) 
            *max = T[i];
    }
}
void recherche(int *T, int n, int val, int *pos) 
{
    *pos = -1;
    for (int i = 0; i < n; i++) 
    {
        if (T[i] == val) 
        {
            *pos = i;
            return;
        }
    }
}
int main() 
{
    int V[] = {12, 3, 5, 7, 19, -2, 0, 34};
    int min, max;
    min_max(V, 8, &min, &max);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    return 0;
}     
#include<stdio.h>
int Min_Max(int * T, int n, int * min, int * max){
    *min =  T[0];
    *max = T[1];
    for(int i=0; i<n; i++){
        if(T[i]<*min)
            *min=T[i];
        if(T[i]>*max)
            *max=T[i];
    } 

}

int recherche(int *T, int n, int x){
    int i;
    for(int i=0; i<n; i++){
        if(T[i]==x)
        return i;
    }
    return -1;
}

int * duplication(int * t, int n, int *n2){
    int *V=malloc(n*sizeof(int));
    int i, j=0;
    for(int i=0; i<n; i++){
        if(recherche(V, j, t[i])== -1)
            V[j++]=t[i];
    }
    *n2=j;
    return V;

}

int main(){
    int * new_V;
    int a, b, pos, x;
    int U[5]={1,2,3,4,5,0,3,5,4};
    int n=5;
    Min_Max(U, n, &a, &b);
    pos=recherche(U,n,3);
    new_V=duplication(U, n, &x);

}