class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=-1e9, sum=-1e9;
        for(auto &i: nums){
            sum=max(i, sum+i);
            ans=max(ans, sum);
        }
        return ans;
    }
};
