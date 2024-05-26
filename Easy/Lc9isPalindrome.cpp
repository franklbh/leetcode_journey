#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        int end = str.length() - 1;
        if (x < 0) {
            return false;
        }
        for (int i = 0; i <= str.length() / 2; ++i) {
            if (str[i] != str[end]) {
                return false;
            }
            end--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    int test1 = 121;
    int test2 = -121;
    int test3 = 10;
    int test4 = 1234321;
    int test5 = 12321;

    std::cout << "Is " << test1 << " a palindrome? " << std::boolalpha << solution.isPalindrome(test1) << std::endl; // true
    std::cout << "Is " << test2 << " a palindrome? " << std::boolalpha << solution.isPalindrome(test2) << std::endl; // false
    std::cout << "Is " << test3 << " a palindrome? " << std::boolalpha << solution.isPalindrome(test3) << std::endl; // false
    std::cout << "Is " << test4 << " a palindrome? " << std::boolalpha << solution.isPalindrome(test4) << std::endl; // true
    std::cout << "Is " << test5 << " a palindrome? " << std::boolalpha << solution.isPalindrome(test5) << std::endl; // true

    return 0;
}
