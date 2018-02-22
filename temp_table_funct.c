#include <stdio.h>

float get_celc(float);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temp table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("%3s\t%6s\n", "Fah", "Cel");
    while (fahr <= upper) {
        celsius = get_celc(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/* convert fahr to celc */
float get_celc(float fahr) {
    float c = 0;
    c = (5.0/9.0) * (fahr-32.0);
    return c;
}
