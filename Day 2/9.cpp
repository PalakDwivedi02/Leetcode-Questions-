//SELF KIN
bool isPalindrome(int x){
    if(x<0||(x%10)==0&&x!=0) return 0;
    unsigned int new = 0;
    while(x>new)
    {
        new = (new*10) + (x%10);
        x/=10;
    }
    if(new==x||new/10==x) return 1;
    return 0;
}
