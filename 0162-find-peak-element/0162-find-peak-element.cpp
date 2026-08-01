class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();

        //traverse to check every element 
        for(int i=0;i<n;i++){
            //check for the left side
            bool l=(i==0)|| (nums[i]>=nums[i-1]);
            //check for right side
            bool r=(i==n-1)||(nums[i]>=nums[i+1]);

            if(l && r) return i;
        }
        return -1;
    }
};