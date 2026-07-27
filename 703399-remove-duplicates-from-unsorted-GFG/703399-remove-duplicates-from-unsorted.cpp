class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int, int>m;
        vector<int> r;
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]==0){
                r.push_back(arr[i]);
            }
            m[arr[i]]++;
            
        }
        return r;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna