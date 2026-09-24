class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        if (s.empty() || words.empty()) {
            return ans;
        }

        int wordLen = words[0].size();
        int wordCount = words.size();

        int totalLen = wordLen * wordCount;

        if (s.size() < totalLen) {
            return ans;
        }

        // Required frequency
        unordered_map<string, int> need;

        for (string word : words) {
            need[word]++;
        }

        // Try different starting positions
        for (int offset = 0; offset < wordLen; offset++) {

            int left = offset;
            int count = 0;

            unordered_map<string, int> window;

            // Move right word by word
            for (int right = offset;
                 right + wordLen <= s.size();
                 right += wordLen) {

                string word = s.substr(right, wordLen);

                // Word is not required
                if (!need.count(word)) {

                    window.clear();
                    count = 0;
                    left = right + wordLen;

                    continue;
                }

                // Add word
                window[word]++;
                count++;

                // Too many copies of this word
                while (window[word] > need[word]) {

                    string leftWord = s.substr(left, wordLen);

                    window[leftWord]--;
                    left += wordLen;
                    count--;
                }

                // We have all required words
                if (count == wordCount) {

                    ans.push_back(left);

                    // Move left to search for next window
                    string leftWord = s.substr(left, wordLen);

                    window[leftWord]--;
                    left += wordLen;
                    count--;
                }
            }
        }

        return ans;
    }
};