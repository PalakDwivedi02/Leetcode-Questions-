class Solution {
public:
    bool suffice(vector <int> &piles, int mid, int h)
    {
        int time = 0;
        for(unsigned int i=0;i<piles.size(); i++)
        {
            if(mid>piles[i]) time++;
            else time += ceil((piles[i]/(double)mid));
        }
        if(time<=h) return 1;
        return 0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 1e9;
        while(low<high)
        {
            int mid = (low+high)/2;
            if (suffice(piles,mid,h)) high = mid;
            else low = mid+1;
        }
        return low;
    }
};