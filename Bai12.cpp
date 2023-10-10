//
// Tinh S(n) = x + x^2 + x^3 + x^4 + ...... + x^n
//
#include <stdio.h>
int main(){
    int i = 1, n;
    float x, t = 1, s = 0;
    printf("\nEnter your number x : ");
    scanf("%f", &x);

    printf("\nEnter your number n : ");
    scanf("%d", &n);

    while (i <= n){
        t = t * x;
        s = s + t;
        i++;
    }
    printf("\nSum is %f", s);
    return 0;
}
