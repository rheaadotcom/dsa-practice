class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int num=threshold*k;
        int cnt=0;
        int sum=0;

        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum>=num) cnt++;
        for(int i=k;i<n;i++){
            sum-=arr[i-k];
            sum+=arr[i];
            if(sum>=num) cnt++;
        }
        return cnt;
    }
};