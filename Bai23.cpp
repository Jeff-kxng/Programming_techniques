//
// Điểm số lương "ước số" của số nguyên dương n
//

#include <stdio.h>
int main(){
    int n, count = 0;

    do{
        printf("Enter a positive integer n (n > 0) : ");
        scanf("%d", &n);

        if(n <= 0){
            printf("\n N must be greater than 0. please enter your number agian!");
        }
    } while (n <= 0);

    printf("Divisors of %d are : ", n);

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%4d", i);
            count ++;
        }
    }
    printf("\nNumber of divisors of %d is: %d\n", n, count);
    return 0;
}

/*
 #include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    int count;
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
    count = 0;
    while(i <= n)
    {
        if(n % i == 0)
        {
           printf("%4d", i);
           count++;
        }
            i++;
    }
    printf("\nSo luong cac uoc so cua %d la: %d", n , count);
    getch();
    return 0;
}
 */