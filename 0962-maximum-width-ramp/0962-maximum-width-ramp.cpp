class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<pair<int,int>>p;

        //storing the elements with their indexes 
        for(int i=0;i<nums.size();i++){
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
       
        int minIdx=p[0].second;

        for(int i=0;i<n;i++){
            ans=max(ans,p[i].second-minIdx);
            minIdx=min(minIdx,p[i].second);
        }
        return ans;     
    }
};