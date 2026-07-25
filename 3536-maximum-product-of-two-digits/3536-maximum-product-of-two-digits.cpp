class Solution {
public:
    int maxProduct(int n) {
        int maxi=INT_MIN;
        vector<int>temp;
        while(n>0){
            int last=n%10;
            temp.push_back(last);
            n/=10;
        }
        int ans=0;
        for(int i=0;i<temp.size();i++){
            for(int j=i+1;j<temp.size();j++){
              ans=temp[i]*temp[j];
              maxi=max(maxi,ans);
        }
    }
    return maxi;
    }
};