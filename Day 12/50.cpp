class Solution {
public:
    double myPow(double x, int n) {
        if(n==1||x==1||x==0) return x;
        double res = 1;
        if(n == INT_MIN)
        {
            n++;
            res = x;
        }
        if(n<0) x = 1/x;
        n = abs(n);
        while(n>0)
        {
            if(n&1)
            {
                n--;
                res *= x;
            }
            else
            {
                n>>=1;
                x *= x;
            }
        }
        return res;
    }
};