#include <stdio.h>
int estTrie(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}
int insererDansTrie(int tab[], int n, int capacite, int valeur) {
    if (n >= capacite) {
        return n; 
    }

    int i;
    for (i = n - 1; (i >= 0 && tab[i] > valeur); i--) {
        tab[i + 1] = tab[i];
    }
    tab[i + 1] = valeur;
    return n + 1; 
}
int insererTrieAuto(int **T, int *n, int *capacite, int x) {
    if (*n >= *capacite) {
        *capacite *= 2; 
        int *temp = realloc(*T, (*capacite) * sizeof(int));
        if (temp == NULL) {
            return -1; 
        }
        *T = temp;
    }

    int i;
    for (i = *n - 1; (i >= 0 && (*T)[i] > x); i--) {
        (*T)[i + 1] = (*T)[i];
    }
    (*T)[i + 1] = x;
    (*n)++;
    return 0; 
}