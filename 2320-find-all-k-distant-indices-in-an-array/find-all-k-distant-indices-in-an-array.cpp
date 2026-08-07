class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++){
            while (j < n && (j < i - k || nums[j] != key)) {
                j++;
            }if (j < n && j <= i + k) {
                ans.push_back(i);
            }
        }return ans;
    }
};