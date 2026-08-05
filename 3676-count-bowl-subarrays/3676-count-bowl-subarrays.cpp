class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        vector<int> st;   
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            while (!st.empty() && nums[st.back()] < nums[i]) {
                st.pop_back();
                if (!st.empty())
                    ans++;
            }

            st.push_back(i);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna