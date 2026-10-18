class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for (int num : s) {
            if (s.find(num - 1) == s.end()) {
                int length = 1;
                int r = num + 1;
                while (s.find(r) != s.end()) {
                    length++;
                    r++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
