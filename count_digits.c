#include <stdio.h>
// Ce programme compte le nombre des entiers entre par l'utilisateur 
int main(){
    int n; 
    int repond;
    int count = 0;
    scanf("%d", &n);
    repond = n; // la variable repond va mémorisé la valeur de n
    //compter les chiffre 
    if(n == 0 ) {
    count = 1;
    } else {
            while (n != 0) {
            n = n / 10;
            count++;
            }
        }
    printf("%d contient %d chiffre(s).\n", repond, count);
    return 0;
}
