class Solution {
public:
   vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        int m = score[0].size();
        if(m < k)
            return score;
        
        vector<pair<int,int>>ds;
        for(int i=0; i<n; i++){
            ds.push_back({score[i][k],i});
        }
        sort(ds.begin(),ds.end());
        reverse(ds.begin(),ds.end());
        vector<vector<int>> ans;
        int j = 0;
        while(n--){
            int x = ds[j].second;
            ans.push_back(score[x]);
            j++;
        }
        return ans;
    }
};