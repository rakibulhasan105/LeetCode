class Solution
{
public:
    int binary_search(vector<int> &arr, int key, int st, int end)
    {
        if (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] <= key)
            {
                return binary_search(arr, key, mid + 1, end);
            }
            else
            {
                return binary_search(arr, key, st, mid - 1);
            }
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        return binary_search(nums, target, 0, nums.size() - 1);
    }
};