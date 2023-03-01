class Solution {
public:
    //unordered_map <int,long long> mp;
    int climbStairs(int n) {
        if(n<=3) return n;
        int f=1,s=2,t=0;
        for(int i=3;i<=n;i++)
        {
            t = f+s;
            f = s;
            s = t;
        }
        return s;
    }
};