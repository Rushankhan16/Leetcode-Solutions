class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        if(st.size()<3){
            return *st.rbegin();
        }
        auto it=st.rbegin();
        it++;
        it++;
        return *it;
    }
};