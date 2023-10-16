//
// Đếm số lượng "ước số chẵn" của số nguyên dương n
// To count the number ò even factor ò a póitive integer n, can use a loop to iterate through numbers from 1 to n

#include <iostream>

int main(){
    int n;
    std::cout << "Enter a positive integer n : ";
    std::cin >> n;

    if (n <= 0){
        std::cout << "Please enter a positive interger." << std::endl;
    } else {
        int count = 0;

        for (int i = 1; i <= n; i++){
            if (n % i == 0 && i % 2 == 0){
                count++;
            }
        }
        std::cout << "The number of even factors of " << n << " is : " << count << std::endl;
    }
    return 0;
}