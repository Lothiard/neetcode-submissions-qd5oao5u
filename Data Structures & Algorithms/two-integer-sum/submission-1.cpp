class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> indices{};

        for (std::size_t i{}; i < nums.size(); ++i) {
            indices[nums[i]] = i;
        }

        for (std::size_t i{}; i < nums.size(); ++i) {
            int diff{ target - nums[i] };
            if (indices.count(diff) && indices[diff] != i) {
                return {i, indices[diff]};
            }
        }

        return {};
    }
};
