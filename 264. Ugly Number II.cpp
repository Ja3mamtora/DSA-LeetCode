class Solution {
public:
    int nthUglyNumber(int n) {
        set<long> st;
        long num=1;
        st.insert(1);
        for(int i=0;i<n;i++){
            num= *st.begin();
            st.insert(num*2);
            st.insert(num*3);
            st.insert(num*5);
            st.erase(num);
        }
        return num;
    }
};