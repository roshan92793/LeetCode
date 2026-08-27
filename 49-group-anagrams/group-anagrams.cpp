class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(auto v : strs){
            string temp = v;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(v);
        }
        for (auto& p : mp) {
            ans.push_back(p.second);
        }
        return ans;
    }
};