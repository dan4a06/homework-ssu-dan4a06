#include <iostream>

    /*С  Создайте рекурсивную функцию, которая выводит на экран простые множители
числа.*/

    void printPrimeFactors(int n, int divisor = 2) {
        if (n <= 1) {
            return;
        }

        if (n % divisor == 0) {
            std::cout << divisor << " ";
            printPrimeFactors(n / divisor, divisor);
        }
        else {
            printPrimeFactors(n, divisor + 1);
        }
    }

    int main() {
        setlocale(LC_ALL, "RU");
        int number;
        std::cout << "Введите число: ";
        std::cin >> number;

        std::cout << "Простые множители числа " << number << ": ";
        printPrimeFactors(number);
        std::cout << std::endl;

        return 0;
    }