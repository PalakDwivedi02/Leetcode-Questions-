class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        unsigned long long z = 0;
        for(unsigned int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                long long tmp = 0;
                while(i<nums.size()&&nums[i]==0)
                {
                    tmp++; i++;
                }
                z += tmp;
                z += (tmp-1)*(tmp)/2;
            }
        }
        return z;
    }
};