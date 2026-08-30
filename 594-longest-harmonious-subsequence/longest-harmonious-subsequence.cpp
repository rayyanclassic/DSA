class Solution {
public:
//rayyan
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        int longest = 0;
        for (auto& [value, freq] : count) {
            if (count.count(value + 1)) {
                longest = max(longest, freq + count[value + 1]);
            }
        }

        return longest;
    }
};