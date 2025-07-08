#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

bool containsLetter(const std::string& word, char letter) {
    letter = std::tolower(letter);
    for (char c : word) {
        if (std::tolower(c) == letter) {
            return true;
        }
    }
    return false;
}

std::string replaceWords(const std::string& sentence, char letter) {
    std::stringstream input(sentence);
    std::string word, result;
    char lastChar = '\0'; // ��� �������� ���������� ����� ����������

    while (input >> word) {
        // �������� ���������� ������� � �����, ���� ��� ���� ����������
        lastChar = (std::ispunct(word.back())) ? word.back() : '\0';
        if (lastChar) {
            word.pop_back(); // ������� ���� ���������� �� �����
        }

        if (containsLetter(word, letter)) {
            result += "...";
        }
        else {
            result += word;
        }

        if (lastChar) {
            result += lastChar; // ��������� ���� ���������� �������
        }
        result += ' '; // ��������� ������
    }

    // ������� ��������� ������ ������
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string sentence;
    char letter;

    std::cout << "������� �����������: ";
    std::getline(std::cin, sentence);

    std::cout << "������� �����: ";
    std::cin >> letter;

    std::string result = replaceWords(sentence, letter);
    std::cout << "���������: " << result << std::endl;

    return 0;
}