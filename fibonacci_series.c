#include <stdio.h>
#include <limits.h> // pour INT_MAX

int main() {
    int n;
    int a = 0, b = 1, next;

    // Demander à l'utilisateur d'entrer un entier
    printf("Entrez un nombre entier positif : ");
    if (scanf("%d", &n) != 1) {
        return 1; // erreur de lecture
    }

    if (n < 0) {
        printf("Nombre négatif non autorisé.\n");
        return 1;
    }

    // Affichage de la suite de Fibonacci
    while (a < n) {
        printf("%d ", a);

        // Protection contre le dépassement d'entier
        if (a > INT_MAX - b) {
            printf("\nErreur : dépassement de capacité.\n");
            return 1;
        }

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
