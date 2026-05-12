class Solution {
public:
    int countDigitOne(int n) {
        long long place=1;
        int ans=0;
        while(place<=n){
            long long high=n/(place*10);
            long long cur=(n/place)%10;
            long long low=n%place;
            if(cur==0){
                ans+=high*place;
            }
            else if(cur==1){
                ans+=high*place+low+1;
            }
            else{
                ans+=(high+1)*place;
            }
            place *=10;
        }return ans;
    }
};