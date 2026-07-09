class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        mpp[0]=-1;

        int preSum=0;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            int rem=preSum%k;

            if(mpp.count(rem)){
                if(i-mpp[rem]>=2) return true;
            }else {
                mpp[rem]=i;
            }
        }
        return false;
    }
};