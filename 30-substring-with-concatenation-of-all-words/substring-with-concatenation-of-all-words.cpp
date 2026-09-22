class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        int len = words[0].size();
        int n = words.size();

        unordered_map<string , int> need;
        for( string word : words){
            need[word]++;
        }
        for(int start = 0; start < len; start++){
            unordered_map<string, int> have;
            int left = start;
            int count = 0;

            for(int right = start; right + len <= s.size(); right += len){
                string word = s.substr(right,len);
                if(need.find(word) == need.end()){
                    have.clear();
                    count = 0;
                    left = right + len;
                    continue;
                }
                have[word]++;
                count++;

                while(have[word] > need[word]){
                    string old = s.substr(left , len);
                    have[old]--;
                    left += len;
                    count--;
                }
                if(count == n){
                    ans.push_back(left);
                    string old = s.substr(left , len);
                    have[old]--;
                    left += len;
                    count--;
                }
            }
        }
        return ans;
    }
};