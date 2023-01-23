class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.size()==0)
        return 1;
        vector<int>map(n+1);
        for(auto x: trust){
            map[x[0]]--;
            map[x[1]]++;

        }
        for(int i=0;i<map.size();i++){
            if(map[i]==n-1)
            return i;
        }
        return -1;
    }
};