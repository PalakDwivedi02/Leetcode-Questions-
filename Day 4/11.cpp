//SELF KIN

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =  0;
        int heightSize = height.size()-1;
        int mx = 0;
        while(left<heightSize)
        {
            mx = max(mx,(heightSize-left)*min(height[left],height[heightSize]));
            if(height[left]<height[heightSize])
                left++;
            else
                heightSize--;
        }
        return mx; 
    }
};