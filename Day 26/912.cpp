class Solution {
public:
    void CountSort(vector<int> &arr, int &n)
    {
        int mx = arr[0], mn = arr[0];
        for (int i = 0; i < n; i++)
        {
            mx = (mx > arr[i]) ? mx : arr[i];
            mn = (mn < arr[i]) ? mn : arr[i];
        }
        int range = mx - mn + 1;
        vector<int> count(range, 0);
        for (int i = 0; i < n; i++)
        {
            count[arr[i] - mn]++;
        }
        for (int i = 1; i < range; i++)
        {
            count[i] += count[i - 1]; // printf("%d ",count[i]);
        }
        // printf("\n");
        vector<int> output(n);
        for (int i = 0; i < n; i++)
        {
            output[--count[arr[i] - mn]] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        CountSort(nums,n);
        return nums;
    }
};