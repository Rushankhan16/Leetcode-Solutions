class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        map<int, int> mp;

        for(int i = 0; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            mp[start]++;
            mp[end + 1]--;
        }

        int count = 0;
        int ans = 0;

        for(auto it : mp) {
            count += it.second;
            ans = max(ans, count);
        }

        return ans;
    }
};