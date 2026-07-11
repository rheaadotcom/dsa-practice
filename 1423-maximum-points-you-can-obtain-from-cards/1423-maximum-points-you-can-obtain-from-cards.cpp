class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int total=0;

        for(int num:cardPoints){
            total+=num;
        }
        if(k==n) return total;
             
        int sum=0;
        int windowSize=n-k;
       

        for(int i=0;i<windowSize;i++){
            sum+=cardPoints[i];
        }
         int mini=sum;
        for(int i=windowSize;i<n;i++){
            sum+=cardPoints[i];
            sum-=cardPoints[i-windowSize];
             
        mini=min(mini,sum);     
            
        }
        return total-mini;
    }
};