class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<nums.size();i++){
          int pichla,agla=nums[i];
          while(st.size() and __gcd(st.top(),agla)>1){
              pichla=st.top();
              agla=lcm(pichla,agla);
              st.pop();
          }
          st.push(agla);
        }
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};