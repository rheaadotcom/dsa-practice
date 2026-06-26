class Solution {
public:
    void solve(int start,int &n,int k,vector<int>& temp,vector<vector<int>>& res){
        if(k==0){
            res.push_back(temp);
            return;
        }
        if(start>n) return;
        temp.push_back(start);
        solve(start+1,n,k-1,temp,res);

        temp.pop_back();
        solve(start+1,n,k,temp,res);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        solve(1,n,k,temp,res);
        return res;
    }
};