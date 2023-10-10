//
// Tính tổng tất cả các "ước số" của số nguyên dương n
//
#include <stdio.h>
int main(){
    int i, n;
    long s;

    do {
        printf("\nEnter your number n (n >= 0) : ");
        scanf("%d", &n);

        if(n <= 0){
            printf("\n N is should be greater than 0, Please enter your number again!!!");
        }
    } while (n <= 0);
    i = 1;
    s = 0;

    while (i <= n){
        if (n % i == 0){
            printf("%4d", i);
            s = s + i;
        }
        i++;
    }
    printf("\nTong cac uoc cua %d la %ld", n, s);
    return 0;
}
/*
 #include <stdio.h>

int main() {
    int n;
    long s = 0;

    do {
        printf("Enter your number n (n > 0): ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("N should be greater than 0. Please enter your number again!\n");
        }
    } while (n <= 0);

    printf("Divisors of %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);

            // Add a plus sign and space if it's not the last divisor
            if (i != n) {
                printf(" + ");
            }

            s += i;
        }
    }

    printf("\nSum of divisors of %d is %ld\n", n, s);
    return 0;
}

 */