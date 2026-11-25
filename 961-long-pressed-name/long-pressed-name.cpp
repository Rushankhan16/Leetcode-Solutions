class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.size();
        int m=typed.size();
        int l=0,r=0;
        while(r<m){
            if(l<n && name[l]==typed[r]){
                l++;
                r++;
            }
            else{
                if(l>0 && typed[r]==name[l-1]){
                    r++;
                }
                else{
                    return false;
                }
            }
        }
        return l==n;
    }
};