class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt1=0,cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)  cnt++;
            else cnt=0;
            cnt1=max(cnt1,cnt);
        }
        return cnt1;
    }
};