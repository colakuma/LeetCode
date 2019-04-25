/*
* author: cocakuma
* blog: http://mrkod.com/
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int area = 0;
        int i = 0;
        int j = height.size() - 1;
        while(i < j) {
            if(height[i] > height[j]) {
                area = (j - i) * height[j];
                --j;
            }
            else {
                area = (j - i) * height[i];
                ++i;
            }
            if(area > max_area) {
                max_area = area;
            }
        }

        return max_area;
    }
};