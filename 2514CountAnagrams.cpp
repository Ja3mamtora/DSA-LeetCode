class Solution {
public:
    int mod = 1e9 + 7;
    vector<long long>fact;
    void factorial()
    {
        long long ans = 1;
        fact[1] = 1;
        fact[0] = 1;
        for (int i = 2; i <= 1e5; i++)fact[i] = (fact[i - 1] % mod * i % mod) % mod;
    }
    long long fastexpo(long long a,int b,int mod){
        long long ans = 1;
        while(b > 0){
            if(b & 1)ans = (ans % mod * a % mod) % mod;
            a = (a % mod * a % mod) % mod;
            b >>= 1;
        }
        return ans;
    }
    int countAnagrams(string s) {
        int n = s.size();
        stringstream str(s);
        string word;
        fact.resize(1e5 + 3,0);
        factorial();
        long long ans = 1;
        while(str >> word){
            vector<int>arr(26,0);
            int n = word.size();
            for(auto it : word){
                arr[it - 'a']++;
            }
            long long count = 1;
            for(int i = 0;i < 26;i++){
                count = (count % mod * fact[arr[i]] % mod) % mod;
            }
            count = (fastexpo(count,mod - 2,mod) % mod * fact[n] % mod) % mod;
            ans = (ans % mod * count % mod) % mod;
        }
        return ans;
    }
};