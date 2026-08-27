class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cur_gas = 0;
        int tgas = 0;
        int tcost=0;
        int starting=0;
        int n=gas.size();
        for(int i = 0;i<n;i++){
            tgas+=gas[i];
            tcost+=cost[i];
            cur_gas+=(gas[i]-cost[i]);
            if(cur_gas<0){
                starting=i+1;
                cur_gas=0;
            }
        }return tcost>tgas?-1:starting;

    }
};