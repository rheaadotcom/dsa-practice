class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,zeroCnt=0,maxLen=0;

        for(int r=0;r<nums.size();r++){
            if(nums[r]==0) zeroCnt++;
        
        while(zeroCnt>k){
            if(nums[l]==0) zeroCnt--;
            l++;
        }
        maxLen=max(maxLen,r-l+1);
        }
        return maxLen;
    }
};