#include <stdio.h>
#include <stdlib.h>
int rechercheDichotomique(int t[], int n, int x)
{
    int debut = 0, fin = n - 1, milieu;

    while (debut <= fin)
    {
        milieu = (debut + fin) / 2;   

        if (t[milieu] == x)           
            return milieu;            

        else if (t[milieu] < x)       
            debut = milieu + 1;

        else                          
            fin = milieu - 1;
    }

    return -1;  
}
int main()
{
    int n, x, *t, resultat;

    printf("Entrez le nombre d'éléments dans le tableau trié : ");
    scanf("%d", &n);

    t = (int *)malloc(n * sizeof(int));

    printf("Entrez les éléments du tableau trié en ordre croissant :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }

    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &x);

    resultat = rechercheDichotomique(t, n, x);

    if (resultat != -1)
        printf("Élément trouvé à l'indice %d.\n", resultat);
    else
        printf("Élément non trouvé dans le tableau.\n");

    free(t);
    return 0;
}
