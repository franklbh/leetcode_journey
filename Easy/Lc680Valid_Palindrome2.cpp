#include <iostream>
#include <string>

class Solution {
public:
    bool validPalindrome(const std::string& s) 
    {
        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            // If the characters at the left and right pointers are not the same, 
            //then we need to check if the string is a palindrome after removing one character from either the left or right pointer.
            if (s[left] != s[right])
            {
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }

    // Helper function to check if the string is a palindrome
    bool isPalindrome(const std::string& str, int left, int right)
    {
        while (left < right)
        {
            if (str[left] != str[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    std::string s1 = "aba";
    std::string s2 = "abca";
    std::string s3 = "abc";
    
    std::cout << std::boolalpha;
    std::cout << "Is \"" << s1 << "\" a valid palindrome after at most one deletion? " << solution.validPalindrome(s1) << std::endl; // true
    std::cout << "Is \"" << s2 << "\" a valid palindrome after at most one deletion? " << solution.validPalindrome(s2) << std::endl; // true
    std::cout << "Is \"" << s3 << "\" a valid palindrome after at most one deletion? " << solution.validPalindrome(s3) << std::endl; // false

    return 0;
}
