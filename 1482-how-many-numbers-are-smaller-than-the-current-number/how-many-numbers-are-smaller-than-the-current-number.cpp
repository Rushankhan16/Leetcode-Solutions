class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();

        vector<int> original = nums;
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            int j = 0;

            while(nums[j] < original[i]) {
                j++;
            }

            ans.push_back(j);
        }

        return ans;
    }
};