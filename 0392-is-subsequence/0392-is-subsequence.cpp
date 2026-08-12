class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size(),m=t.size();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(s[i]==t[j]){
            i++;
            }
            j++;
        }
        return i==s.length();
    }
};