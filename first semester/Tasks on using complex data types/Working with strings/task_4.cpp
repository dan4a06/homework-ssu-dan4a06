#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    std::string input;
    std::cout << "������� ������: ";
    std::getline(std::cin, input);
    
    std::set<char> uniqueLetters;
        
    for (char c : input) {
        if (std::isalpha(c)) { // ���������, �������� �� ������ ������
            uniqueLetters.insert(std::tolower(c)); // �������� � ������� �������� � ��������� � ���������
        }
    }

    std::cout << "���������� ��������� ����: " << uniqueLetters.size() << std::endl;

    return 0;
}