#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float x, S, T;
    long M;

    printf("\n16.Enter your number x : ");
    scanf("%f", &x);

    do
    {
        printf("\nEnter your number n: ");
        scanf("%d", &n);

        if(n < 1)
        {
            printf("\n N should be >= 1. Please enter your number again !");
        }

    } while(n < 1);

    S = 0;
    T = 1;
    M = 0;
    i = 1;

    while(i <= n)
    {
        T = T * x;
        M = M + i;
        S = S + T/M;
        i++;
    }
    printf("\nSum is  %f", S);
    getch();
    return 0;
}