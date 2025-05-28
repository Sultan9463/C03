#include <stdio.h>

int main(){
  int n, a = 0, b = 1, next;
scanf("%d", &n);
printf("\n");
while ( a <= n) {
printf ("%d", a);
next a = b;
a = b;
b = next;
}
printf("\n");
return 0;
}
