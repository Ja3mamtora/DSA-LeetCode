class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<int,vector<int>>ds;
        vector<vector<int>>ans;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            int d=pow(x,2)+pow(y,2);
            ds.insert({d,{x,y}});
        }
        auto i=ds.begin();
        while(k--){
            ans.push_back(i->second);
            i++;
        }
        return ans;
    }
};