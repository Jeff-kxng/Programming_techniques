//
// Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví du n = 100 ước lẻ lớn nhất là 25
// To find the largest odd divisors of a positive integer n, can use a loop to check number from n -1 down to 1 and find the first odd divisor

#include <iostream>

int main(){
    int n;
    std::cout << "Enter your interger number n : ";
    std::cin >> n ;

    if (n <= 0){
        std::cout << "PLease enter a positive interger."  << std::endl;
    } else {
        int largestOdddivisors = 1;
        for (int i = n - 1; i > 0 ; i--){
            if (n % i == 0 && i & 2 == 1){
                largestOdddivisors = i;
                break; // Found the largest odd divisor, exit the loop
            }
        }
        std::cout << "The largest odd divisor of " << n << " is: " << largestOdddivisors << std::endl;
    }
    return 0;
}