class Solution {
public:
    int hammingWeight(uint32_t n) {
        int dem=0;
        while(n){
            if(n%2==1) dem++;
            n/=2;
        }
        return dem;
    }
};
