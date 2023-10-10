//
// Tinh S(n) = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
//
#include <stdio.h>
int main()
{
    int i = 1, n;
    float S = 0;
    do
    {
        printf("\nPlease enter your number n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nPlease enter your number again!");
        }
    }while(n < 1);

    while(i <= n)
    {
        S = S + (float)i / (i + 1);
        i++;
    }
    printf("\nSum is %f", S);

    return 0;
}