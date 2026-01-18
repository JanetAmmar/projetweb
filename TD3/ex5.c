#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("Le PGCD est : %d\n", a);

    return 0;
}
//2eme methode: par division
//int A,B,pgcd,min,i;
//printf("Entrez le premier nombre positif : ");
//scanf("%d",&A);
//min=A<B!A:B;
//for(i=0;i<min;i++)
//if(A%i==0 && B%i==0) 
   //pgcd=i;
//if(B%A==0) pgcd=A;
//else if(A%B==0)
   //pgcd=B;



//3eme methode: Euclide
//pgcd(24, 18)
//pgcd(6,0) = 6
//while(B!=0) {
   //reste=A%B;
   //A=B;
   //B=r;