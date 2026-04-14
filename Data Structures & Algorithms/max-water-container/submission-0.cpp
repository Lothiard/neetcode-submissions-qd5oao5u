class Solution {
public:
    int maxArea(std::vector<int>& heights) {
        int left{}, right = heights.size() - 1, result{};

        while (left < right) {
            int area = std::min(heights[left], heights[right]) * (right - left);
            result = std::max(result, area);

            if (heights[left] <= heights[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return result;
    }
};
