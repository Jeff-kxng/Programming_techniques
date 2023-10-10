//
// Tinh S(n) = 1/2 + 3/4 + 5/6 + ... + (2n + 1) /(2n + 2)
//
#include <stdio.h>

int main() {
    int i = 0, n;
    float s = 0;

    do {
        printf("Enter your number n: ");
        scanf("%d", &n);
        if (n < 1) {
            printf("Please enter a number n greater than or equal to 1.\n");
        }
    } while (n < 1);

    while (i < n) {
        s = s + (float)(2 * i + 1) / (2 * i + 2);
        i++;
    }

    printf("\nSum is %f\n", s);

    return 0;
}
