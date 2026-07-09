class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>preSum(n);
        preSum[0]=nums[0];
        for(int i=1;i<n;i++){
            preSum[i]=preSum[i-1]+nums[i];
        }
        return preSum;
    }
};