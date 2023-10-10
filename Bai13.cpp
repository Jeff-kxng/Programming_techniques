//
// Tinh S(n) = x^2 + x^4 + .... + x^2n
//
#include <stdio.h>
#include <valarray>

int main(){
    int i = 1, n;
    float x, t = 1, s = 0;
    printf("\n13.Enter your number x : ");
    scanf("%f", &x);

    printf("\nEnter your number n : ");
    scanf("%d", &n);

    while (i <= n){
        // t = t * x *x;
        t = pow(x, (2 *i));
        s = s + t;
        i++;
    }
    printf("\nSum is %f", s);
    return 0;
}