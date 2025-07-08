#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    
    std::set<char> uniqueLetters;
        
    for (char c : input) {
        if (std::isalpha(c)) { // Проверяем, является ли символ буквой
            uniqueLetters.insert(std::tolower(c)); // Приводим к нижнему регистру и добавляем в множество
        }
    }

    std::cout << "Количесвто различных букв: " << uniqueLetters.size() << std::endl;

    return 0;
}