class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j=0;
        int i=1;
        while(k!=0)
        {
            if(j<arr.size()&&arr[j]==i)
            {
                j++;
                i++;
            }
            else
            {
                k--;
                if(k==0) break;
                i++;
            }
        }
        return i;
    }
};