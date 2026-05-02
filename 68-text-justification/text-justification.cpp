class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();
        int i = 0;
        while(i < n){
            int j = i;
            int linelength = 0;
            while(j < n && linelength + words[j].size() + (j-i)<=maxWidth){
                linelength += words[j].size();
                j++;
            }
            int gaps = j-i-1;
            string line;
            if(j==n || gaps == 0){
                for(int k = i; k<j; k++){
                    line +=words[k];
                    if (k < j - 1) line += " ";
                }
                line += string(maxWidth - line.size(), ' ');
            }
            else{
                int totalSpaces = maxWidth - linelength;
                int spaceEach = totalSpaces / gaps;
                int extra = totalSpaces % gaps;
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) {
                        line += string(spaceEach + (extra-- > 0 ? 1 : 0), ' ');
                    }
                }
            } 
            result.push_back(line);
            i = j;
        }
        return result;
    }
};