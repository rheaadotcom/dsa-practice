class Solution {
public:
    string minWindow(string s, string t) {
        //frequency of character required
         unordered_map<char,int>need;

         for(char c:t){
            need[c]++;
        }
        //frequency inside current window
        unordered_map<char,int>window;
        int left=0;
        int have=0;
        int needCount=need.size();
         
        int minLen=INT_MAX;
        int start=0;

        //expand the window using right

        for(int right=0;right<s.length();right++){
            char c =s[right];
            window[c]++;
        if(need.count(c) && window[c]==need[c]){
            have++;
        }
        //current window is valid
        while(have==needCount){
            //update the min answer

            if(right-left+1 <minLen){
                minLen=right-left+1;
                start=left;
            }
            char leftChar=s[left];
            window[leftChar]--;

            if(need.count(leftChar)&&
            window[leftChar]<need[leftChar]){
                have--;
            }
            left++;
        }
    }

    //no valid window

    if(minLen ==INT_MAX){
        return "";
    }
    return s.substr(start,minLen);
}
};