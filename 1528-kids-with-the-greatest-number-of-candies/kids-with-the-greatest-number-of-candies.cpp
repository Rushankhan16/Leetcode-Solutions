class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int largest = *max_element(candies.begin(), candies.end());
        vector<bool>result;
        for(int i=0; i<n; i++){
            candies[i]+=extraCandies;
            if(candies[i]>=largest){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};