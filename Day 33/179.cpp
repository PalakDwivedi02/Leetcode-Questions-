class Solution {
public:
    static bool cmp(int &a, int &b)
    {
        int x = (int)log10(a), y = (int)log10(b);
        return (a/pow(10,x)) > (b/pow(10,y));
    }
    static bool nwcmp(int a, int b)
    {
        int x = (int)log10(a), y = (int)log10(b);
        int st = (x>y)?x:y;
        while(st--)
        {
            int p = (a/pow(10,x--)); 
            int q = (b/pow(10,y--));
        }
        return a<b;
    }
    string largestNumber(vector<int>& nums) {
        //sort(nums.begin(),nums.end(),cmp);
        vector <string> v;
        for(auto e: nums)
            v.push_back(to_string(e));
        sort(v.begin(),v.end(),[](string &s1, string &s2){ return s1+s2>s2+s1; });
        string res="";
        for(auto e: v)
            res += (e);
        if(res.size()&&res[0]=='0') return "0";
        return res;
    }
};