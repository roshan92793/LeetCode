class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            int cur=i;
            while(nums[cur]!=n){
                int next=nums[cur];
                nums[cur]=n;
                cur=next;
                cnt++;
            }ans=max(ans,cnt);
        }return ans;
    }
};