//
// Tinh S(n) = 1/1x2 + 1/2x3 + ... + 1 /(n x (n + 1))
//
#include <stdio.h>

int main() {
    int i = 1, n;
    float s = 0;

    do {
        printf("Enter your number n: ");
        scanf("%d", &n);

        if (n < 1) {
            printf("Please enter a number n greater than or equal to 1.\n");
        }

    } while (n < 1);

    while (i <= n) {
        s += 1.0 / (i * (i + 1));
        i++;
    }

    printf("\nSum is %f\n@@", s);

    return 0;
}
