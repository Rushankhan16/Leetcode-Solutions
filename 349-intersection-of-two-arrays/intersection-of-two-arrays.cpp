class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp1;
        map<int,int>mpp2;
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0; i<n; i++){
            mpp1[nums1[i]]++;
        }
        for(int i=0; i<m; i++){
            mpp2[nums2[i]]++;
        }
        int k=0;
        while(k<n){
            if(mpp1[nums1[k]]>0 && mpp2[nums1[k]]>0){
                ans.push_back(nums1[k]);
                mpp1[nums1[k]]=0;
            }
            k++;     
        }
        return ans;
    }
};