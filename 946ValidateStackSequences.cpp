class Solution {
public:
    bool validateStackSequences(vector<int>& p, vector<int>& q) {
        stack<int>st;
        int j=0;
        for(int i=0;i<p.size();i++){
            st.push(p[i]);
            while(st.size()>0 and st.top()==q[j]){
                st.pop();
                j++;
            }
        }
        return j==p.size();
    }
};