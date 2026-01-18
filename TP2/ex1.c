#include <stdio.h>
int main() {
     int A;
     printf("Enter une année: ");
     scanf("%d", &A);
     if ((A %400 ==0) || ((A %4 ==0) &&(A %100 !=0))) {
         printf("L'année %d est bissextile.\n", A);
     } else {
         printf("L'année %d n'est pas bissextile.\n", A);
     }
   
    return 0;
}