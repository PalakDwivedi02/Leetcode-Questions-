class Solution {
public:
    string st[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        vector <string> v;
        if(digits.empty()) return v;
        v.push_back("");
        for(unsigned int i=0;i<digits.size();i++)
        {
            int num = digits[i]-48;
            vector<string> res;
            for(unsigned int j=0;j<v.size();j++)
                for(unsigned int k=0;k<st[num].size();k++)
                    res.push_back(v[j]+st[num][k]);
            v.swap(res);
        }
        return v;
    }
};