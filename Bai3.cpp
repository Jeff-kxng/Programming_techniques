//
// Tinh S(n) = 1 + 1/2 + 1/3 + ..... + 1/n
//
#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1, n;
    float S = 0;

    do
    {
        printf("\nEnter your number n is : ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Please enter your number again!");
        }

    }while(n < 1);

    while(i <= n)
    {
        S = S + 1.0 / i;
        i++;
    }
    printf("\ni = %d", i);
    printf("\nS = %f", S);
    printf("\nSum 1 + 1/2 + ... + 1/%d la %.2f !!",n, S);

    getch();
    return 0;
}