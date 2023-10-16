//
// Liệt kê tất cả các "ước số" của số nguyên dương n
// Để giải bài này có thể sử dụng một vòng lặp để duyệt qua các số trừ 1 đến n và kiểm tra xem chúng có phải là ước số của n hay không.

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        std::cout << "Factors of " << n << " are: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}



