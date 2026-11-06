class Solution {
public:

    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        int sum;
        while(l<r&&numbers[l]!=numbers[r]){
            sum=numbers[l]+numbers[r];
            if(sum<target) l++;
            else if(sum>target) r--;
            else break;
        }
        return {l+1,r+1};
    }
};
