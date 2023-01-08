class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n<=2)
        return n;
        int ans=0;
        for(auto x:points){
            unordered_map<double,int>mp;
            double x1=x[0],y1=x[1];
            for(auto y:points){
                double x2=y[0],y2=y[1];
                if(x==y)continue;
                double slope;
                if(x2-x1==0)
                slope=INT_MAX;
                else{
                    slope=(y2-y1)/(x2-x1);
                }
                mp[slope]++;
                ans=max(ans,mp[slope]);
            }
        }
        return ans+1;
    }
};