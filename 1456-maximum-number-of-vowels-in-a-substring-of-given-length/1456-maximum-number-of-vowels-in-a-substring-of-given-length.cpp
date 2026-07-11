class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int left=0,cnt=0,maxCnt=0;

        for(int right=0;right<n;right++){
            if(isVowel(s[right])) cnt++;

            if((right-left+1)==k){
                maxCnt=max(maxCnt,cnt);
                if(isVowel(s[left])) cnt--;
                left++;
            }   
        }
        return maxCnt;
    }
};