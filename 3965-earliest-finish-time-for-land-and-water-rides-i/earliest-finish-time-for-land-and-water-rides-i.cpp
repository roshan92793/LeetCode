class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans=INT_MAX;
        int n=landStartTime.size();
        int m=waterStartTime.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int landFinish=landStartTime[i] + landDuration[i];
                int waterFinish=max(landFinish, waterStartTime[j]) + waterDuration[j];
                ans = min(ans, waterFinish);
                int waterFirstFinish = waterStartTime[j] + waterDuration[j]; 
                int landSecondFinish = max(waterFirstFinish, landStartTime[i]) + landDuration[i];
                ans = min(ans, landSecondFinish);
            }
        }return ans;
    }
};