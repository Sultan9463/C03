#include <stdio.h>
// ce programme convertir la temperature celsius ver fahrenheit
int main() {
    float celsius, fahrenheit;
    scanf("%f", &celsius);
    // conversion celsius vers fahrenheit
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);
    return 0;
}
