class Solution {
public:
    bool canShip(vector<int>& weights,int days,int cap){
        int day=1,sum=0;
        for(int x:weights){
            if(sum+x>cap){
                day++;
                sum=x;
            }
            else
                sum+=x;
        }
        return day<=days;
    }
    int shipWithinDays(vector<int>& weights,int days){
        int l=0,r=0;
        for(int x:weights){
            l=max(l,x);
            r+=x;
        }
        while(l<r){
            int mid=(l+r)/2;
            if(canShip(weights,days,mid))
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};