class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int odd = 0, even = 0;
        for (auto it : nums1) {
            if(it%2==0)even++;
            else odd++;;
        }
        if (even == n || odd == n) {
            return true;
        }
        return true;
    }
};