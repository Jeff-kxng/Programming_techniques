//
// Tinh S(n) = 1 + 2 + 3 +...... + n
//
#include <stdio.h>
#include <conio.h>
int main(){
    int i = 0, n;
    long s = 0;
    printf("\nEnter number n :");
    scanf("%d", &n);
    while (i <= n){
        s = s + i;
        i++;
    }
    printf("\nSum 1 + 2 + ... + %d is %ld", n, s);
    getch();
    return 0;
}