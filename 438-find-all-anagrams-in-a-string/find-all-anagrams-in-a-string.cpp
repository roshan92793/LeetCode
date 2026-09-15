class Solution {
public:
    vector<int> findAnagrams(string s,string p){
        vector<int> ans;
        int sFreq[26]={};
        int pFreq[26]={};
        if(p.size()>s.size()) return ans;
        for(char c:p){
            pFreq[c-'a']++;
        }
        int k=p.size();
        for(int i=0;i<s.size();i++){
            sFreq[s[i]-'a']++;
            if(i>=k){
                sFreq[s[i-k]-'a']--;
            }
            if(i>=k-1){
                bool same=true;
                for(int j=0;j<26;j++){
                    if(sFreq[j]!=pFreq[j]){
                        same=false;
                        break;
                    }
                }
                if(same){
                    ans.push_back(i-k+1);
                }
            }
        }
        return ans;
    }
};