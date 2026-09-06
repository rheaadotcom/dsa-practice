class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=i+1;
        int n=nums.size();
        int cnt=1;
        if(n==0) return 0;
        while(j<n){
            if(nums[i]==nums[j]) j++;
            else{
                i++;
                nums[i]=nums[j];
                cnt++;
                j++;
            } 
        }
            return cnt;
    }
};