//SELF

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1; int ct = 0;
        while(s[i]==' ') i--;
        for(; i>=0&&s[i]!=' '; i--) ct++;
        return ct;
    }
};
