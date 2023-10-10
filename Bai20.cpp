//
// Liệt kê các tất cả các (ước số) của số nguyên dương n
//
#include <stdio.h>
int main()
{
    int i, n;
    do {
        printf("\nEnter your number n (n >= 0) : ");
        scanf("%d", &n);

        if(n <= 0){
            printf("\nN should be more than > 0!! Please enter your number again!");
        }
    } while (n <= 0);
    i = 1;
    while (i <= n){
        if (n % i == 0)
            printf("%4d", i);
        i++;
    }
    return 0;
}
/*
 #include <stdio.h>

int main() {
    int i, n;

    do {
        printf("Enter your number n (n > 0): ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("N should be greater than 0. Please enter your number again!\n");
        }
    } while (n <= 0);

    printf("Divisors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);

            // Add a comma and space if it's not the last divisor
            if (i != n) {
                printf(", ");
            }
        }
    }

    printf("\n");
    return 0;
}
 */