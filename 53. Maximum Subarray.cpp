class Solution
{
public:
    int cross_sum(vector<int> &arr, int l, int mid, int h)
    {
        int lmax = INT_MIN;
        int sum = 0;
        for (int i = mid; i >= l; i--)
        {
            sum += arr[i];
            lmax = max(sum, lmax);
        }

        int rmax = INT_MIN;
        sum = 0;
        for (int i = mid + 1; i <= h; i++)
        {
            sum += arr[i];
            rmax = max(sum, rmax);
        }

        return rmax + lmax;
    }

    int maxSubArraySum(vector<int> &arr, int l, int h)
    {
        if (l == h)
        {
            return arr[l];
        }

        int mid = l + (h - l) / 2;
        int l_sum = maxSubArraySum(arr, l, mid);
        int r_sum = maxSubArraySum(arr, mid + 1, h);
        int cr_sum = cross_sum(arr, l, mid, h);

        return max({r_sum, l_sum, cr_sum});
    }

    int maxSubArray(vector<int> &nums)
    {
        return maxSubArraySum(nums, 0, nums.size() - 1);
    }
};