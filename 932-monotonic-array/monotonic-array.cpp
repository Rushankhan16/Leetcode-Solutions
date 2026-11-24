class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1; i<n; i++){
            if(nums[i-1]<=nums[i]){
                cnt++;
            }
        }
        if(cnt==n-1){
            return true;
        }
        cnt=0;
        for(int i=1; i<n; i++){
            if(nums[i-1]>=nums[i]){
                cnt++;
            }
        }
        if(cnt==n-1){
            return true;
        }
        return false;
    }
};