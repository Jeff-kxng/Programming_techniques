//
// Tinh S(n) = x + x^2/2! + x^3/3! + .... + x^n/N!
//
#include <stdio.h>
int main()
{
    int i = 1, n;
    float x, s, t;
    long M;

    printf("\nEnter your number x : ");
    scanf("%f",&x);

    do{
        printf("\nEnter your number n : ");
        scanf("%d", &n);

        if(n < 1){
            printf("\n N should be >= 1, Please enter your number again!!");
        }
   } while (n < 1);
    s = 0;
    t = 1;
    M = 1;
    i = 1;

    while (i <= n){
        t = t * x;
        M = M * i;
        s = s + t/M;
        i++;
    }
    printf("\nSum is %f", s);
    return 0;
}

// #include <stdio.h>
//
//int main() {
//    int n;
//    float x, s = 0, t = 1;
//
//    printf("Enter x: ");
//    scanf("%f", &x);
//
//    do {
//        printf("Enter n (>= 1): ");
//        scanf("%d", &n);
//    } while (n < 1);
//
//    for (int i = 1; i <= n; i++) {
//        t *= x;
//        s += t / i;
//    }
//
//    printf("Sum is %f\n", s);
//    return 0;
//}