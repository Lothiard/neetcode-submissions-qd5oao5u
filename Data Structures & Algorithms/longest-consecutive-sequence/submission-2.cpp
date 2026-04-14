class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        int res{};
        std::unordered_set<int> store(nums.begin(), nums.end());

        for (const int num : nums) {
            int streak{}, curr{num};
            while (store.find(curr) != store.end()) {
                ++streak;
                ++curr;
            }
            res = std::max(res, streak);
        }
        return res;
    }
};