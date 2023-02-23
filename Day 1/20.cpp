//SELF

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
                st.push(s[i]);
            else
            {
                if(st.empty()) return 0;
                if(s[i]=='}'&&st.top()!='{') return 0;
                if(s[i]==']'&&st.top()!='[') return 0;
                if(s[i]==')'&&st.top()!='(') return 0;
                st.pop();
            }
        }
        if(!st.empty()) return 0;
        return 1;
    }
};


//PDW
class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        for (int i = 0 ;  i< s.length() ; i++)
        {
            char ch = s[i];

           
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch) ; 
            }

            else {
                
                if (!st.empty())
                {
                    char top = st.top() ;
                    if ((ch == ')' && top == '(') || 
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) 
                        {
                            st.pop() ;
                        }
                        else 
                        {
                            return false ; 
                        }
                }
                else 
                {
                    return false ;
                }
            }
        }

        if (st.empty())
        {
            return true ; 
        }
        return false ;
    }
};
