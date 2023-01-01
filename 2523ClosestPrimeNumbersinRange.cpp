class Solution {
public:
    bool checkprime(unsigned long long int n) 
{ 
        if(n==1)return false;
	bool isprime = true; 
	for (unsigned long long int i = 2; i <= sqrt(n); i++) { 
		if (n % i == 0) { 
			isprime = false; 
			break; 
		} 
	} 
	return isprime; 
} 
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
       for(int i=left;i<=right;i++){
           if(checkprime(i))
               ans.push_back(i);
       } 
        vector<int>re;
        if(ans.size()<2){
            re.push_back(-1);
             re.push_back(-1);

            return re;
        }
           
        sort(ans.begin(),ans.end());
        int mia=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            mia = min(mia, abs(ans[i] - ans[i+1]));
        }
        int x,y;
        for(int i=0;i<ans.size()-1;i++){
            if(abs(ans[i] - ans[i+1]) == mia)
        {
            x = ans[i];
            y = ans[i+1];
                break;
            
        }
        }
        re.push_back(x);
        re.push_back(y);
        return re;
    }
};