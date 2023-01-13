class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>ds=intervals[0];
        for(auto it: intervals){
            if(it[0]<=ds[1]){
                ds[1]=max(it[1],ds[1]);
            }
            else{
                ans.push_back(ds);
                ds=it;
            }
        }
        ans.push_back(ds);
        return ans;
    }
};