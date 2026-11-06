class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen=0;
        int l=0;
        int freq[256]={0};
        for(int r=0; r<n; r++){
            freq[s[r]]++;
           
            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }
             int len=r-l+1;
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};