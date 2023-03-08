class Solution {
public:
    void recuradd(vector <string> &res, int n, int left, int right, string curr)
    {
        if(curr.size()==n*2)
        {
            res.push_back(curr);
            return;
        }
        if(left<n) recuradd(res, n, left+1, right, curr+'(');
        if(right<left) recuradd(res, n, left, right+1, curr+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res; recuradd(res,n,0,0,"");
        return res;
    }
};