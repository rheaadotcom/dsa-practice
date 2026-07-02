class Solution {
public:
    int beautySum(string s) {
        int res=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int freq[26]={0};

            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(auto a:freq){
                    if(a>0){
                    maxi=max(maxi,a);
                    mini=min(mini,a);
                }
                }
                res+=maxi-mini;
            }
        }
        return res;
    }
};