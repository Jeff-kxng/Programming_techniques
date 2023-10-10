//
// Tính tích tất cả các "ước số" của số nguyên dương n
//
#include <stdio.h>
int main(){
    int n;
    long p = 1;

    do{
        printf("Enter your number n (n >0) : ");
        scanf("%d", &n);

        if (n <= 0){
            printf("\nN should be greater than 0. Please enter your number again!!!");
        }
    } while (n <= 0);

    printf("\nDivisor of %d are : ", n);

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d", i);

            if (i != n){
                printf(" * ");
            }

            p *= i;
        }
    }
    printf("\nProduct of divisors of %d is %ld\n", n, p);
    return 0;
}
/*
 #include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long P;
    do
    {
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);
    i = 1;
    P = 1;
    while(i <= n)
    {
        if(n % i == 0)
        {
           printf("%4d", i);
           P = P * i;
        }
            i++;
    }
    printf("\nTich cac uoc cua %d la: %ld", n, P);
    getch();
    return 0;
}
 */
