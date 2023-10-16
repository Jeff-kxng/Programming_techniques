//
// Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
// To calculate the sum of all iterate all factors(divisors) of a positive interger n that are smaller than n; can you sue a loop to iterate through number from 1 to n - 1

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        int sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        std::cout << "The sum of factors of " << n << " smaller than itself is: " << sum << std::endl;
    }

    return 0;
}
