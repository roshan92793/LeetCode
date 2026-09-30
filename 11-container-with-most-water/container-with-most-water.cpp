class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size()-1;
        int ans = INT_MIN;
        while(left<right){
            int w = right - left;
            ans =max(min(height[left],height[right])*w,ans);
            if(height[left]<height[right]){
                left++;
            }else{
                if(height[left]>height[right]){
                    right--;
                }
                else{
                    right--;
                    left++;
                }
            }
        }return ans;
    }
};