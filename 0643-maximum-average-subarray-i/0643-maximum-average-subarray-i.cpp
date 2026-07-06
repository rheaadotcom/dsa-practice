class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi =INT_MIN;
        int n = nums.size();

        double windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        maxi = windowSum;
        for (int i = k; i < n; i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];

            maxi = max(maxi, windowSum);
        }
        return maxi / k;
    }
};