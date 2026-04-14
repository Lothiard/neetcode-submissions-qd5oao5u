class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string str{};
        for (const char c : s) {
            if (std::isalpha(c) || std::isdigit(c)) {
                str += std::tolower(c);
            }
        }

        std::cout << str;

        for (std::size_t i{}; i < str.length(); ++i) {
            if (str[i] != str[str.length() - i - 1]) {
                return false;
            }
        }

        return true;
    }
};
