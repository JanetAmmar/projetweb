#include <stdio.h>

void triInsertion(int tab[], int n) {
    int i, j, x;

    for (i = 1; i < n; i++) {     
        x = tab[i];            
        j = i - 1;

        
        while (j >= 0 && tab[j] > x) {
            tab[j + 1] = tab[j];
            j--;
        }

        tab[j + 1] = x;   
    }
}

int main() {
    int tab[] = {5, 2, 9, 1, 3};
    int n = 5;

    triInsertion(tab, n);

    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}
