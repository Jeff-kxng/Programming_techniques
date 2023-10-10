//
// Tinh S(n) = 1 + x + x^3/3! + x^5/5! + ... + x^(2n + 1)/(2n +1)
//
#include <stdio.h>
#include <valarray>

int main()
{
    int i;
    float s, x, t;
    long m, n;

    printf("\nEnter your number x : ");
    scanf("%f", &x);

    do{
        printf("\nEnter your number n (n >= 1) : ");
        scanf("%d", &n);

        if(n < 1){
            printf("\n N should be >= 1, Please enter your number again!!");
        }
    } while (n < 1);
    s = 1;
    i = 1;

    while (i <= n){
        t = pow(x, (2 * i + 1));
        m = i * 2 + 1;
        s = s + x + t / n;
        i++;
    }
    printf("\nSum values is %f", s);
    return 0;
}
/*
 #include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float s, x, t;

    printf("\nEnter your number x: ");
    scanf("%f", &x);

    do {
        printf("\nEnter your number n (n >= 1): ");
        scanf("%d", &n);

        if (n < 1) {
            printf("\nN should be >= 1. Please enter your number again!!");
        }
    } while (n < 1);

    s = 1;
    i = 1;

    while (i <= n) {
        t = pow(x, 2 * i + 1) / (2 * i + 1); // Corrected calculation of t
        s = s + t; // Add t to s
        i++;
    }

    printf("\nSum value is %f", s);
    return 0;
}
 */