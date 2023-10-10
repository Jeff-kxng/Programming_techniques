//
// Tinh S(n) = 1 + 1.2 + 1.2.3 + ......... + 1.2.3...n
//
#include <stdio.h>
int main()
{
    int i = 1, n;
    long s = 0, p = 1;
    do {
        printf("\n11! Enter your number n is here : ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nPlease enter your number n again!!!");
        }
    } while (n < 1);
    while (i <= n){
        p = p * i;
        s = s + p;
        i++;
    }
    printf("\nSum number is %d", s);
    return 0;
}
