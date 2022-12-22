class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0, j=0;
        int n = s.size();
        int maxi = 0;
        while(j<n){  
            char c = s[i];
            int ktp = k;
            while(j<n and (s[i]==s[j] or ktp!=0)){  
                if(s[i]!=s[j]) ktp--; 
                j++;
            }
            if(ktp!=0){  
                if(ktp>i)  
                    maxi = max(maxi, j-0);
                else     
                    maxi = max(maxi, j-i+ktp); 
            }
            else{  
                maxi = max(maxi, j-i);
            }
            while(i<j and c==s[i]) i++;  
                       j=i;
        }
        return maxi;
    }
}