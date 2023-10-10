//
// Tinh S(n) = x + x^3 + x^5 + .... + x^2n+1
//
#include <stdio.h>
#include <valarray>

int main()
{
    int i = 0, n;
    float x, t = 1, s = 0;

    printf("\nEnter your number x : ");
    scanf("%f", &x);

    printf("\nEnter your number n : ");
    scanf("%d", &n);

    while (i < n){
        // t = x + (2 * i + 1)
        t = pow(x, (2 * i + 1));
        s = s + t;
        i++;
    }
    printf("\nSum is %f", s);
    return 0;
}