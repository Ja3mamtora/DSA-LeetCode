class Solution {
public:
    string smallestSubsequence(string text) {
        int cnts[26] = {0}, used[26] = {0};
        for (char c : text) ++cnts[c - 'a'];
        string ans;
        for (char c : text) {
            cnts[c - 'a']--;
            if (used[c - 'a']) continue;
            while (ans.size() && cnts[ans.back() - 'a'] && c < ans.back()) {
                used[ans.back() - 'a'] = 0;
                ans.pop_back();
            }
            ans.push_back(c);
            used[c - 'a'] = 1;
        }
        return ans;
    }
};