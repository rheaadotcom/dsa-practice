class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int l=0,maxCnt=0,cnt=0;
        for(int r=0;r<n;r++){
            if(isVowel(s[r])) cnt++;

            if((r-l+1)==k){
            maxCnt=max(maxCnt,cnt);
            if(isVowel(s[l])) cnt--;
            l++;
        }
        }
        return maxCnt;
    }
};