class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,long long>mp;
        long long count=0;
        for(int i=0;i<rectangles.size();i++){
            double a=rectangles[i][0];
            double b=rectangles[i][1];
            double c=double(a/b);
            
            if(mp.find(c)!=mp.end())
            count = count + mp[c];
            mp[c]++;
        }
        return count;

    }
};