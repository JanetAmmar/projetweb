#include <stdio.h>
#include <math.h>

int main() {
    double x, epsilon, terme, resultat;
    int i;


    printf("Entrer la valeur de x : ");
    scanf("%lf", &x);

    printf("Entrer la valeur de epsilon (precision) : ");
    scanf("%lf", &epsilon);

    
    resultat = 1.0;  
    terme = 1.0;     
    i = 1;

    
    while (fabs(terme) > epsilon) {
        terme = terme * x / i; 
        resultat += terme;      
        i++;
    }

    printf("Valeur approchee de e^%.2f = %.6f\n", x, resultat);
    printf("Nombre de termes utilises : %d\n", i);

    return 0;
}
// //e^x=1+x/1!+x^2/2!+x^3/3!+...+x^n/n!
// //terme= x^n/n!
// // s=0 ;terme=1; p=1; f=1; i=1
// //do
// // s=s+terme
// //p=p*x
// //f=f*i, i++
// //terme=p/f
// //while(fabs(terme)>eps);