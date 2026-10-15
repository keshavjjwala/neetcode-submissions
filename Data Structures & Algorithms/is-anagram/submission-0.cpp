class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> f;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            f[t[j]]--;
        }
        if(s.size()!=t.size()){
            return false;
        }
        for(auto x:f){
            if(x.second!=0) return false;
        }
        return true; 
    }
};
