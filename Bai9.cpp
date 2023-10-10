//
// Tinh S(n) = 1 x 2 x 3 x ....... x n
//
#include <stdio.h>

int main() {
    int i = 1, n;
    long s = 1;

    do {
        printf("Please enter a positive integer n: ");
        scanf("%d", &n);
        if (n < 1) {
            printf("Invalid input. Please enter a positive integer.\n");
        }
    } while (n < 1);

    while (i <= n) {
        s = s * i;
        i++;
    }

    printf("The product of 1 x 2 x 3 x ... x %d is %ld\n", n, s);

    return 0;
}
