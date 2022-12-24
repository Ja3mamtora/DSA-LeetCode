class Solution {
public:
    int captureForts(vector<int>& forts) {
        vector<int> fI;
        int maxi = 0;
        for(int i=0;i<forts.size();i++)
        {
            if(forts[i]==1 || forts[i]==-1)
                fI.push_back(i);
        }
        if(fI.size())
        {
            for(int i=0;i<fI.size()-1;i++)
            {
                if(forts[fI[i]]+forts[fI[i+1]]==0)
                {
                    if(maxi < fI[i+1]-fI[i]-1)
                        maxi = fI[i+1]-fI[i]-1;
                }
            }
        }
        return maxi;
    }
};