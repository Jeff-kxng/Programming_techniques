//
// Tinh S(n) = 1 + 1/3 + 1/5 + .... + 1/(2n+1)
//
#include <stdio.h>
#include <conio.h>
int main(){
    int i, n;
    float s = 0;
    do{
        printf("\nEnter your number n: ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nN phải lớn hơn hoặc bằng 1, Please enter your number again!!");
        }
    } while (n < 1);
    for (i = 0; i < n; i++) {
        s = s + 1.0 / ((2 * i) + 1);
    }
    printf("\nSum is : %f!!!!", s);
    getch();
    return 0;
}