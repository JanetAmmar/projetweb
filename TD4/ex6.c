#include <stdio.h>
#define MAX_SIZE 100
int main() {
    
    char tab[]={'R','B','B','W','R','W'};
    int n;

    printf("Donner le nombre de cailloux : ");
    scanf("%d", &n);

    printf("Entrer les couleurs (B pour bleu, W pour blanc, R pour rouge) :\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &tab[i]); 
    }

    int i = 0;          
    int j = 0;          
    int k = n - 1;      

    while (j <= k) {
        if (tab[j] == 'B') {
            echanger(&tab[i], &tab[j]);
            i++;
            j++;
        } else if (tab[j] == 'W') {
            j++;
        } else if (tab[j] == 'R') {
            echanger(&tab[j], &tab[k]);
            k--;
        }
    }

    printf("\nTableau trié (B -> W -> R) :\n");
    for (int x = 0; x < n; x++) {
        printf("%c ", tab[x]);
    }
    printf("\n");

    return 0;
}
