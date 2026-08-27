class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 0;
        }
        int curr =0;
        int maxR=0;
        int jump=0;
        for(int i=0;i<n-1;i++){
            maxR=max(maxR,nums[i]+i);
            if(curr==i){
                curr=maxR;
                jump++;
                if(curr>=n-1){
                    break;
                }
            }
        }return jump;
    }
};