class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        bool carry = 1;
        while(i>=0)
        {
            digits[i]+=carry;
            carry = (digits[i])/10;
            digits[i]%=10;
            i--;
        }
        if(!carry) return digits;
        vector <int> nw(digits.size()+1);
        nw[0]=1;
        for(i=1;i<nw.size();i++)
            nw[i]=digits[i-1];
        return nw;
    }
};