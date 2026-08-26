class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int x : arr)
            freq[x]++;
        unordered_set<int> check;
        for (auto it : freq) {
            if (check.count(it.second)){
                return false;
            }check.insert(it.second);
        }return true;
    }
};