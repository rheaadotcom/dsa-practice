class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0,cnt=0;

        for(int i=0;i<k;i++){
           sum+=arr[i];
        }
        if(sum>=threshold*k) cnt++;
        for(int i=k;i<n;i++){
            sum+=arr[i];
            sum-=arr[i-k];

            if(sum>=threshold*k) cnt++;
        }
        return cnt;
    }
};