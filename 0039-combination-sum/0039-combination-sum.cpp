class Solution {
public:
    void findCombination(int i, int target, vector<int>& nums,
                         vector<vector<int>>& ans, vector<int>& ds) {
        int n = nums.size();
        if (i == n) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }
        if (nums[i] <= target) {
            ds.push_back(nums[i]);
            findCombination(i, target - nums[i], nums, ans, ds);
            ds.pop_back();
        }
        findCombination(i + 1, target, nums, ans, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }
};