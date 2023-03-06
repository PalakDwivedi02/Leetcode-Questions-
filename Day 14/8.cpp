class Solution {
public:
    int myAtoi(string s) {
        int i=0; bool flag = 0;
        long res = 0;
        while(s[i]==' ') i++;
        //if(s[i]!='-'&&s[i]!='+'&&!isdigit(s[i])) return 0;
        if(s[i]=='-'){flag=1; i++;}
        else if(s[i]=='+') i++;
        while(i<s.size()&&isdigit(s[i]))
        {
            if(long(res*10+(s[i]-48))>(long(INT_MAX)))
                return (flag==1)?INT_MIN:INT_MAX;
            res = res*10 + (s[i]-48);
            i++;
        }
        if(flag) res *= -1;
        return res;
    }
};