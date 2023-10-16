//
// Tính tích tất cả các "ước số lẻ" của số nguyên dương n
// To calculate the product of all odd factors of a positive integer n, you can use a loop to iterate thrugh numbers from 1 to n

#include <iostream>

int main(){

    int n;
    std::cout << "Enter a positive integer n : ";
    std::cin >> n;

    if (n <= 0){
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        long long product = 1; // Use a long long to handle large results

        for (int i = 2; i <= n; i++){
            if (n % i == 0 && i % 2 == 1){
                product *= i;
            }
        }
        std::cout << "The product of odd factors of " << n << "is : " << product << std::endl;
    }
    return 0;
}