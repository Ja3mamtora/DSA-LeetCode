class Solution {
public:
 int Distinct_Prime_factors(vector<int> a)
{
    unordered_set<int> m;
    for (int i = 0; i < a.size(); i++) {
        int sq = sqrt(a[i]);
        for (int j = 2; j <= sq; j++) {
            if (a[i] % j == 0) {
                m.insert(j);
                while (a[i] % j == 0) {
                    a[i] /= j;
                }
            }
        }
        if (a[i] > 1) {
            m.insert(a[i]);
        }
    }
 
    return m.size();
}
    int distinctPrimeFactors(vector<int>& nums) {
            
        return Distinct_Prime_factors(nums);
        
    }
};