//
// Tinh S(n) = 1 + x^2 / 2! + x^4/4! + .... + x^2n/(2n)!
//
#include <stdio.h>
#include <valarray>

int main(){
    int i;
    float x, s, t;
    long m, n;

    printf("\nEnter your number x : ");
    scanf("%f", &x);

    do{
        printf("\nEnter your number n (n >= 0) : ");
        scanf("%d", &n);

        if(n < 0){
            printf("\n N should be >= 0, please enter your number agian!!");
        }
    } while (n < 0);
     s = 1;
    i = 1;

    while (i <= n){
        t = pow(x, (2 *i));
        m = i * 2;
        i++;
    }
    printf("\nSum is %f", s);
    return 0;
}