class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.size()==0) return res;
        int pos = strs[0].size();
        for(unsigned int i=1;i<strs.size();i++)
        {
            while(strs[i].substr(0,pos)!=strs[0].substr(0,pos)) pos--;
        }
        return strs[0].substr(0,pos);
    }
};