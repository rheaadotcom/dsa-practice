class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();

        int totalSum=0;
        for(int it:nums) totalSum+=it;
        
        int leftSum=0;
        for(int i=0;i<n;i++){
            int rightSum=totalSum-leftSum-nums[i];
            if(leftSum==rightSum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};