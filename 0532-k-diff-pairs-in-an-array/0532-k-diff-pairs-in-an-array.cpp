class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;

        unordered_map<int,int>mpp;

        for(int num:nums){
            mpp[num]++;
        }
        int ans=0;
        
        //check if any element appears twice
        if(k==0){
            for(auto &it:mpp){
                if(it.second>1) ans++;
            }
        }
        //check if nums+k exist
        else{
            for(auto &it:mpp){
                if(mpp.count(it.first+k)) ans++;
            }
        }
        return ans;
    }
};