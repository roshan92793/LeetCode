class Solution {
public:
    int trap(vector<int>& h) {
        int n =h.size();
        vector<int> l(n,0);
        vector<int> r(n,0);
        l[0]=h[0];
        for(int i = 1;i<n;i++){
            l[i]=max(l[i-1],h[i]);
        }
        r[n-1]=h[n-1];
        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],h[i]);
        }int water = 0;
        for(int i=0;i<n;i++){
            int lvl = min(l[i],r[i]);
            water += (lvl -h[i]);
        }return water;
    }
};