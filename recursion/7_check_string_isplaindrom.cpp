#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    // Base case: If the string is empty or has one character, it's a palindrome
    if (str.length() <= 1) return true;

    // If first and last characters are not equal, return false
    if (str.front() != str.back()) return false;

    // Recursive call with the substring excluding first and last characters
    return isPalindrome(str.substr(1, str.length() - 2));
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is NOT a palindrome.\n";

    return 0;
}
