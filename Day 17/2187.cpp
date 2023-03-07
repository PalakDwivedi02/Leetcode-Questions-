class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long lxn = 1, mxn = 1e14, mid = 0;
        while(mxn>lxn)
        {
            mid = (lxn+mxn)/2;
            long long trips = 0;
            for(unsigned int i=0;i<time.size();i++)
            {
                trips += mid/(long long)time[i];
            }
            if(trips>=totalTrips)
            {
                mxn = mid;
            }
            if(trips<totalTrips)
            {
                lxn = mid+1;
            }
        }
        return lxn;
    }
};