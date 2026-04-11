class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxProd=INT_MIN;
        for(int i=0;i<n;i++){
            int multiple=1;
            for(int j=i;j<n;j++){
                multiple*=nums[j];
                maxProd=max(maxProd,multiple);
            }
        }return maxProd;
    }
};