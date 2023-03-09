class Solution {
public:
    int breaker(vector<int> &nums, int st, int en, int target)
    {
        if(st<nums.size()&&target==nums[st]) return st;
        if(en<nums.size()&&target==nums[en]) return en;
        while(st<en-1)
        {
            int mid = (st+en)/2;
            if(nums[mid]==target) return mid;
            if(target<nums[mid]) en=mid;
            else st=mid; 
        }
        if(st<nums.size()&&target==nums[st]) return st;
        if(en<nums.size()&&target==nums[en]) return en;
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int st = 0, en = nums.size()-1, mid = 0;
        if(st<nums.size()&&target==nums[st]) return st;
        if(en<nums.size()&&target==nums[en]) return en;
        while(st<en-1)
        {
            mid = (st+en)/2;
            if(nums[mid]>=nums[st])
                st = mid;
            else
                en = mid;
        }
        if(nums[st]<nums[en]) st++;
        if(target>=nums[0]) return breaker(nums,0,st,target);
        return breaker(nums,st+1,nums.size()-1,target);
    }
};