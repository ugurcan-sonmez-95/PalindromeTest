// PalindromeTest

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <deque>

bool is_palindrome(const std::string &s) {
    std::deque<char> d;
    for (char c: s) {
        if (std::isalpha(c))
            d.push_back(std::toupper(c));
    }
    
    char c1 {};
    char c2 {};
    
    while (d.size() > 1) {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        if (c1 != c2)
            return false;
    }
    return true;
}

int main() {
    std::string test_string;
    std::cout << "Please enter a word to test if it is palindrome: ";
    std::getline(std::cin, test_string);

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "String" << "Result" << std::endl;
    std::cout << std::setw(8) << std::left << test_string << is_palindrome(test_string) << std::endl;

    std::cout << std::endl;
    return 0;
} 