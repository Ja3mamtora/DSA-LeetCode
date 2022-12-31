class Solution {
public:
	int maxWidthRamp(vector<int>& nums) {
		stack<int> st;
		int n = nums.size();
		for (int i = 0; i < n; ++i) {
			if (st.empty() || nums[st.top()] > nums[i]) st.push(i);
		}
		int ans = INT_MIN;
		for (int i = n - 1; i >= 0; --i) {
			while (st.size() && nums[st.top()] <= nums[i]) {
				ans = max(ans, i - st.top());
				st.pop();
			}
		}
		return ans;
	}
};