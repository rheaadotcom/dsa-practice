class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long calculateTotalhrs(vector<int>&piles,int hourly){
        long long totalhrs=0;
        for(long long i=0;i<piles.size();i++){
            totalhrs+= ceil((double)piles[i]/(double)hourly);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1,high=findmax(piles);
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long  totalhrs=calculateTotalhrs(piles,mid);
            if(totalhrs<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};