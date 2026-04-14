class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) { return false; }
        
        std::unordered_map<char, int> one{};
        std::unordered_map<char, int> two{};

        for (std::size_t i{}; i < s.length(); ++i) {
            ++one[s[i]];
            ++two[t[i]];
        }

        return one == two;
    }
};
