class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxR=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(maxR<i){
                return false;
            }
            maxR=max(maxR,i+nums[i]);
        }return true;
    }
};