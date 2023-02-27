class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> ump = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        long long num = ump[s.back()];
        for(int i = s.length()-2; i >=0; i--)
        {
            if(ump[s[i]]<ump[s[i+1]])
                num -= ump[s[i]];
            else 
                num += ump[s[i]];
        }
        return num;
    }
};