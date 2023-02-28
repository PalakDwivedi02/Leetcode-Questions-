class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        string res = "";
        for(int i = 0; i<numRows; i++)
        {
            for(int j = i; j<s.size();)
            {
                res += s[j];
                int z = j+(numRows*2)-2-2*i;
                if(i!=0&&i!=numRows-1&&z<s.size()) res += s[z];
                j += (numRows*2)-2;
            }
        }
        return res;
    }
};