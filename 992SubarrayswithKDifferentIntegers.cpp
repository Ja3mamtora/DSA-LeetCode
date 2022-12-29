class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int K) {
    int answer = 0;
    unordered_map<int, int> m;
    int left = 0;
    int right = 0;
    while(right < A.size()) {                   
        m[A[right]] = right;
        while (m.size() > K) {                 
            if (m[A[left]] == left)           
                m.erase(A[left]);
            left++;                        
        }
        if (m.size() == K) {
            int minIndex = right;
            for (auto i : m)                   
                minIndex = min(minIndex, i.second);
            answer += minIndex - left + 1;    
        }
        right++;
    }
    return answer;
}

};