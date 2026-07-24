class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
      /* for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};  
        */
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int  r=target-nums[i];
            if(mp.find(r)!=mp.end()){
                return {mp[r],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }     
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna