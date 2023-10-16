//
// Cho số nguyên dương n, Kiểm tra xem n có phải là số hoàn thiện hay không ?
// To check if a positive integer n is a perfect number, need to calculate the sum of all its divisors (including q and itselft) and compare that sum to n.

#include <iostream>

int main(){
    int n;
    std::cout << "Enter a positive integer n : ";
    std::cin >> n;

    if (n <= 0){
        std::cout << "Please enter a positive integer ." << std::endl;
    } else {
        int sum = 0;

        for (int i = 1; i <= n; i++){
            if (n % i == 0 ) {
                sum += i;
            }
        }
        if (sum == n){
            std::cout << n << " is a perfect number. " << std::endl;
        } else {
            std::cout << n << " is not a perfect number." << std::endl;
        }
    }
    return 0;
}