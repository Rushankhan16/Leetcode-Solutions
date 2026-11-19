class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();

        map<char, int> need;

        // Frequency of characters required from t
        for(char ch : t) {
            need[ch]++;
        }

        int l = 0;
        int count = 0;
        int minLen = INT_MAX;
        int start = 0;

        for(int r = 0; r < n; r++) {

            // If current character is needed
            if(need[s[r]] > 0) {
                count++;
            }

            need[s[r]]--;

            // We have all characters of t
            while(count == t.length()) {

                // Update answer
                if(r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                // Remove left character
                need[s[l]]++;

                if(need[s[l]] > 0) {
                    count--;
                }

                l++;
            }
        }

        if(minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};