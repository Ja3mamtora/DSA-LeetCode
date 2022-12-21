class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int n=a.size();
        int i=0,j=0,ans=0,c=0;
      while(j<n){
	        if(a[j]==0)
	              c++;
            j++;
            while(i<j && c>k){
	             if(a[i++]==0)c--;
        }
        ans=max(ans,j-i);
}
return ans;
    }
};
