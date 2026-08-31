class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {};
        for(char x : magazine){
            freq[x - 'a']++;
        }
        for(char x : ransomNote){
            if(freq[x - 'a']==0){
                return false;
            }freq[x - 'a']--;
        }return true;
    }
};