class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if (s.empty()) { return 0; }
        std::unordered_map<int, int> freq{};

        int left{}, right{1}, result{1};
        ++freq[s[0]];
        while (right < s.length()) {
            if (freq[s[right]] == 1) {
                result = std::max(result, right - left);
                --freq[s[left]];
                ++left;
            } else {
                ++freq[s[right]];
                ++right;
            }
        }
        result = std::max(result, right - left);

        return result;
    }
};
