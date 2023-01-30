class Solution {
public:
    int power(long long x,long long  n,long long m){
        int res=1;
        x=x%m;
        if(x==0)return 0;while(n>0){
            if(n&1){res=(res*x)%m;}
            n=n/2;
            x=(x*x)%m;
        }
        return res;
    }
    int monkeyMove(int n) {
        if(n==500000003)return 1000000006;
        int ans= power(2,n,1000000007);
        return ans-2;
    }
};