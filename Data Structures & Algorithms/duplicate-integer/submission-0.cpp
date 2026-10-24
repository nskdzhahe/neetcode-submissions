class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        
        for(int x:nums){
            if(m[x]==1) return true;
            else m[x]++;
        }
        return false;
}
};