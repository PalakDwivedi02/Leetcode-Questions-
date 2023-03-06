class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 0;
        for(unsigned int i=0;i<nums.size(); i+=2)
            res += nums[i];
        return res;
    }
};