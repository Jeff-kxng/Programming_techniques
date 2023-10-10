//
// Tinh S(n) = 1/2 + 1/4 + 1/6 + .... + 1/n
//
#include <stdio.h>
#include <conio.h>
int main(){
    int i, n;
    float s = 0;
    do {
        printf("\nEnter your number n : ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nN phai lon hoac bang 1, Please enter your number again!!!");
        }
    } while (n < 1);
    for(i = 1; i <= n; i++){
        s = s + 1.0 / (2 * i);
    }
    printf("\nSum is %f", s);
    getch();
    return 0;
}