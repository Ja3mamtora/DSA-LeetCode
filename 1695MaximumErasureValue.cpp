class Solution {
public:
    int maximumUniqueSubarray(vector<int>& s) {
        int maxi= 0;
        int sum=0;
        map<int,int>mp;
        int i=0,j=0;
        while(j<s.size())
        {
            sum=sum+s[j];           
            mp[s[j]]++;
            
            
            if(mp.size()==j-i+1)
            {
                maxi= max(maxi,sum);
                    j++;
            }
            else
                if(mp.size()<j-i+1)
                {
                    while(mp.size()<j-i+1)
                    {
                        mp[s[i]]--;
                        sum=sum-s[i];
                        if(mp[s[i]]==0)
                        {
                            mp.erase(s[i]);
                            
                        }
                        i++;
                    }
                    j++;
                }
            
        }
        return maxi;
    }
};