class Solution {
public:
    int romanToInt(string s) {
        auto value = [](char c) {
            if( c == 'I') return 1;
            else if( c == 'V') return 5;
            else if( c == 'X') return 10;
            else if( c == 'L') return 50;
            else if( c == 'C') return 100;
            else if( c == 'D') return 500;
            else if( c == 'M') return 1000;
            return 0;
        };
        int total = 0;
        for( int i = 0; i < s.size(); i++){
            int current = value(s[i]);
            if(i  < s.size() - 1 && current < value(s[ i + 1] )){
                total -=current;
            }
            else{
                total +=current;
            }
        }return total;
    }
};