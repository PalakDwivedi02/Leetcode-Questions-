class Solution {
public:
    int reverse(int x) {
        long long y=0;
        bool flag = (x<0);
        while(x!=0)
        {
            y *= 10;
            y += abs(x%10);
            if (y>INT32_MAX) return 0;
            x /= 10;
        } if(flag) y *= -1;
        return y;
    }
};