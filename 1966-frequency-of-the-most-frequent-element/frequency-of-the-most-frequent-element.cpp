class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int l = 0;
        long long sum = 0;
        int ans = 1;

        for (int r = 0; r < n; r++) {
            sum += nums[r];

            
            long long cost = 1LL * nums[r] * (r - l + 1) - sum;

            while (cost > k) {
                sum -= nums[l];
                l++;

                cost = 1LL * nums[r] * (r - l + 1) - sum;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};