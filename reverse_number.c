#include <stdio.h>
// ce programme inverse un nombre entier donné par l'utilisateur
int main(){
    int n, q = 0, p = 0;
    scanf ("%d", &n);
    //inverser des chiffres 
    while (n != 0){
        q = q * 10 + n % 10;
            n = n / 10;
    }
    if (p) {
        q = -p;
    }
    printf ("Nombre inversé : %d\n", q);
    return 0;
}
