class Solution {
public:
    void solve(int idx, vector<int>& nums, vector<int>& ds,
               set<vector<int>>& result) {
        if (idx == nums.size()) {
            result.insert(ds);
            return;
        }
        ds.push_back(nums[idx]);
        solve(idx + 1, nums, ds, result);

        ds.pop_back();
        solve(idx + 1, nums, ds, result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        set<vector<int>> result;

        sort(nums.begin(), nums.end());
        solve(0, nums, ds, result);

        vector<vector<int>> ans(result.begin(), result.end());
        return ans;
    }
};