class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l = 0;
        int ans = 0;
        int maxFreq = 0;
        map<char, int> freq;

        for (int r = 0; r < n; r++) {
            freq[s[r]]++;

            maxFreq = max(maxFreq, freq[s[r]]);

            while ((r - l + 1) - maxFreq > k) {
                freq[s[l]]--;
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};