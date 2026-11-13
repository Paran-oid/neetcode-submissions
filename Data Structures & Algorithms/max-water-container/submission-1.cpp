class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int l = 0, r = heights.size() - 1;
        unsigned int max = 0;
        while(l < r)
        {
            unsigned int area = std::min(heights[l], heights[r]) * (r - l);
            if(area > max)
            {
                max = area;
            }

            if(heights[l] < heights[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return max;
    }
};
