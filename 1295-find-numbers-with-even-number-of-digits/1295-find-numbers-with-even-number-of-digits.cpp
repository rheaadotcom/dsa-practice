class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int num:nums){
            int digits=0;
            while(num>0){
                num/=10;
                digits++;
            }
            if(digits%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};