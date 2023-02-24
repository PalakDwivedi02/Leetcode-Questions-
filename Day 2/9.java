//SELF PALAK

class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        else{
        int i;
        int r=0,d=0;
        for(i=x;i!=0;i=i/10)
        {
            d=i%10;
            r=r*10+d;
        }
        System.out.println(r);
        if(r==x)
            return true;
        else return false;
    }
    }
}
