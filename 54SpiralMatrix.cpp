class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int row= nums.size();
        int col= nums[0].size();
        int end= row*col -1, count=0;
        vector<int>v;
        int startingRow=0, startingCol=0,endingRow= row-1, endingCol= col-1;

        while(count<= end)
        {
            for(int i= startingCol;count <= end && i<= endingCol;i++)
            {
                v.push_back(nums[startingRow][i]);
                count++;
            }
            startingRow++;
            for(int i= startingRow;count <= end && i<= endingRow;i++)
            {
                v.push_back(nums[i][endingCol]);
                count++;
            }
            endingCol--;
            for(int i= endingCol;count <= end && i>=startingCol;i--)
            {
                v.push_back(nums[endingRow][i]);
                count++;
            }
            endingRow--;
            for(int i= endingRow;count <= end && i>= startingRow;i--)
            {
                v.push_back(nums[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return v;
    }
};