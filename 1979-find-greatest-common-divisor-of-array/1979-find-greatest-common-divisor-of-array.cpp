class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX,mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            mx=max(mx,nums[i]);

        }
        return gcd(mini,mx);
    }
};