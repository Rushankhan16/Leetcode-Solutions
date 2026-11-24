class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                nums[i]=0;
                cnt++;
            }
            else{
                nums[i]=1;
            }
        }
        for(int i=0; i<n; i++){
            if(cnt>0){
                nums[i]=0;
                cnt--;
            }
            else{
                nums[i]=1;
            }
        }
        return nums;
    }
};