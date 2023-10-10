//
// Tinh T(x, n) = x^n
//
#include <stdio.h>

double Power_n(double x, int n) {
    double result = 1;
    while (n--) {
        result = result * x;
    }
    return result;
}

double qPower_n(double x, int n) {
    double result = 1;
    while (n) {
        if (n % 2 == 1) {
            result = result * x;
        }
        x = x * x;
        n = n / 2;
    }
    return result;
}

int main() {
    double x = 3;
    int n = 2;
    double z;
    z = qPower_n(x, n);
    printf("z = %f\n", z);
    return 0;
}
