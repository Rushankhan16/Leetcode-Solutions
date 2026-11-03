class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxInd=0;
        int n=nums.size();
        for(int i=0; i<n; i++){

            if(i>maxInd) return false;
            int j=nums[i] + i;
            
            maxInd=max(maxInd,j);
        }
            return true;
    }
};