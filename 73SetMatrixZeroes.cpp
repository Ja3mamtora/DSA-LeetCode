class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        vector<int>x,y;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums[i][j]==0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }

        for(auto a:x){
            for(int j=0;j<n;j++){
                nums[a][j]=0;
            }
        }
        for(auto b:y){
            for(int i=0;i<m;i++){
                nums[i][b]=0;
            }
        }
    }
};