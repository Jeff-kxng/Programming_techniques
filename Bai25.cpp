//
// Tính tổng tất cả các "ước số chẵn" của số nguyên dương n
// Để tính tổng tát cả các ước số chẵn của một số nguyên dương n, có thể ssử dụng một vòng lớp để duyệt qua các số từu q đến n

#include <iostream>

int main(){
    int n;
    std::cout << "Enter a positive integer n : ";
    std::cin >> n;

    if (n <= 0){
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        int sum = 0;
        for (int i = 0; i <= n; i++){
            if (n % i == 0 && i % 2 == 0){
                sum += i;
            }
        }
        std::cout << "The sum of even factor of " << n << "is" << sum << std::endl;
    }
    return 0;
}