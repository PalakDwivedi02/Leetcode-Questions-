//SELF KIN

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<pair<int,int>> p;
        for(int i=0;i<nums.size();i++)
            p.push_back(make_pair(nums[i],i));
        sort(p.begin(),p.end());
        int st=0,end=p.size()-1;
        while(true)
        {
            if(p[st].first+p[end].first==target)
            {
                if(p[st].second==p[end].second)
                    return vector<int>{p[st].second,p[end].second};
                else
                    return vector<int>{p[st].second,p[end].second};
            }
            else if(p[st].first+p[end].first<target)
                st++;
            else
                end--;
        }
    }
