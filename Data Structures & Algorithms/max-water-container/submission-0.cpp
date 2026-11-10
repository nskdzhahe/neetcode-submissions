class Solution {
public:
    int maxArea(vector<int> &heights)
    {
        int l = 0, r = heights.size()-1, maxx = 0, area = 0;
        while (l<r )
        {
            
            area = (r - l) * min(heights[l] , heights[r]);
            maxx = max(maxx, area);
            if(heights[r]>=heights[l]) l++;
            else r--;
        }
        return maxx;
    }
};
