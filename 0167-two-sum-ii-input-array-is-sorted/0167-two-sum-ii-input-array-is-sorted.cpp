class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mpp;
        int n = numbers.size();
        for (int i = 0; i < n; i++) {

            int rem = target -numbers[i];

            if (mpp.find(rem) != mpp.end()) {
                return {mpp[rem]+1, i+1};
            }
            mpp[numbers[i]] = i;
        }
        return {};
    }
};