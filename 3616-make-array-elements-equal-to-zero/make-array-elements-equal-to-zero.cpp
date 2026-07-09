class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        long long total=0;
        for(int x:nums) total+=x;
        long long left=0;
        int ans=0;
        for(int x:nums){
            if(x==0){
                long long right=total-left;
                if(left==right){
                    ans+=2;
                }else if(llabs(left-right)==1){
                    ans+=1;
                }
            }left+=x;
        }return ans;
    }
};