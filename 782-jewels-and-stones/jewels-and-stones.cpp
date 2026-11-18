class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        int n=jewels.length();
        int k=stones.length();
        for(int i=0; i<n; i++){
            int j=0;
            while(j<k){
                if(jewels[i]==stones[j]){
                    cnt++;
                }
                j++;
            }
        }
        return cnt;
    }
};