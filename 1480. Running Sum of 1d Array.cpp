class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        long long temp = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            temp += nums[i];
            nums[i] = temp;
        }

        return nums;
    }
};