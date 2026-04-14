class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) { 
        std::unordered_map<int, int> freq{};
        for (const int num : nums) {
            ++freq[num];
        }

        std::vector<std::pair<int, int>> arr{};
        for (const auto& f : freq) {
            arr.push_back({f.second, f.first});
        }
        std::sort(arr.rbegin(), arr.rend());

        std::vector<int> result{};
        for (std::size_t i{}; i < k; ++i) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};
