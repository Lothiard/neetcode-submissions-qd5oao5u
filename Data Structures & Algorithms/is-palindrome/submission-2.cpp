class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string str{};
        for (const char c : s) {
            if (std::isalnum(c)) {
                str += std::tolower(c);
            }
        }

        return str == std::string(str.rbegin(), str.rend());
    }
};
