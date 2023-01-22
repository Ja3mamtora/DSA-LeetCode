class Solution {
public:
    int alternateDigitSum(int n) {
        int s=0;
        vector<int>a;
        while(n){
            int r=n%10;
            a.push_back(r);
            n=n/10;
            
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(i%2!=0)
                s=s-a[i];
            else
                s=s+a[i];
        }
        
        return s;
    }
};