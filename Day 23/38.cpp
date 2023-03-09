#include<bits/stdc++.h>
using namespace std;
string findcntsy(string s)
    {
        if(s=="") return "1";
        string res = "";
        for(unsigned int i=0;i<s.size();i++)
        {
            bool flag = false;
            string tmp = to_string(s[i]-48);
            //cout<<tmp<<endl;
            int ct = 0;
            while(i<s.size()&&s[i]==(tmp[0]))
            {
                ct++; i++; flag = true;
            }
            tmp = to_string(ct).append(tmp);
            //cout<<tmp<<endl;
            res += tmp;
            if(flag) i--;
        }
        return res;
    }
string countAndSay(int n) {
    string res = "";
    while(n--)
    {
        string tmp = findcntsy(res);
        res.swap(tmp);
    }
    return res;
}

int main()
{
    cout<<findcntsy("111221");
    return 0;
}