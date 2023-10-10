//
// Tinh S(n) = 1 + 1 /(1 + 2) + 1 / (1 + 2 + 3) + ........ + 1 / (1 + 2 + 3 + .... + n)
//
#include <stdio.h>
int main()
{
    int i = 1, n;
    float s = 0, t = 0;

    do {

        printf("\nEnter your number n : ");
        scanf("%d", &n);

        if(n < 1){
            printf("\nN is should be >= 1, Please enter your number agian!!");
        }
    } while (n < 1);

    while (i <= n){
        t = t + i;
        s = s + 1.0 / t;
        i++;
    }

    printf("\nSum is %f", s);
    return 0;
}