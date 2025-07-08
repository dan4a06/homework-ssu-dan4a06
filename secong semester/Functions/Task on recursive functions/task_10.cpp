#include <iostream>

double chebyshevT(int n, double x) {
    if (n == 0) {
        return 1; 
    }
    if (n == 1) {
        return 2 * x - 1; 
    }

    return 2 * (2 * x - 1) * chebyshevT(n - 1, x) - chebyshevT(n - 2, x);
}

int main() {
    setlocale(LC_ALL, "RU");
    double x;
    int n;

    std::cout << "¬ведите значение x: ";
    std::cin >> x;

    std::cout << "¬ведите степень n: ";
    std::cin >> n;

    double result = chebyshevT(n, x);
    std::cout << "T_" << n << "(" << x << ") = " << result << std::endl;

    return 0;
}