class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>mpp;

       mpp[0]=1;
       int cnt=0,sum=0;

       for(int num:nums){
        sum+=num;
       
       if(mpp.find(sum-k)!=mpp.end()){
       cnt+=mpp[sum-k];
       }
       mpp[sum]++;
       }
       return cnt;
    }
};