class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int x : nums)
            mp[x]++;

        for (auto &it : mp) {
            if (isPrime(it.second))
                return true;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna