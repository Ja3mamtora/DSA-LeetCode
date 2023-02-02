unordered_map<char, int> mp;
bool cmp(string a, string b) {
	int n = min(a.size(), b.size());
	for (int i = 0; i < n; i++) {
		if (mp[a[i]] < mp[b[i]])
			return true;
		else if (mp[a[i]] > mp[b[i]])
			return false;
	}
	if (a.size() <= b.size())
		return true;
	return false;
}
class Solution {
public:
	bool isAlienSorted(vector<string>& words, string order) {
		for (int i = 0; i < order.size(); i++)
			mp[order[i]] = i;

		vector<string> temp = words;
		sort(temp.begin(), temp.end(), cmp);
		return temp == words;
	}
};