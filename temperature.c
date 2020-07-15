

#include <stdio.h>

main() {
//    int fahr, celsius;
//    int lower, upper, step;
//    lower = 0;
//    upper = 300;
//    step = 20;
//    fahr = lower;
//    while (fahr <= upper) {
//        celsius = 5 * (fahr - 32) / 9;
//        printf("%3d\t%6d\n", fahr, celsius);
//        fahr = fahr + step;
//    }

    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5.0 / 9.0 * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}