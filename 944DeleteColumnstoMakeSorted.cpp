class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
        for(int i=0;i<strs[0].size();i++){
            char prev=' ';
            for(int j=0;j<strs.size();j++){
                char curr=strs[j][i];
                    if(curr<prev){
                        ans++;
                        break;
                    }
                    prev=curr;
            }
        }
        return ans;
    }
};