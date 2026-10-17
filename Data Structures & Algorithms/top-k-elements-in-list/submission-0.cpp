class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        int n=nums.size();
        vector<int> result;
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }
        for(auto x:f){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(), v.end(), [](auto a, auto b) {
                return a.second > b.second;
            });
            for (int i = 0; i < k; i++) {
                result.push_back(v[i].first);
            }
        return result;
    }
};
