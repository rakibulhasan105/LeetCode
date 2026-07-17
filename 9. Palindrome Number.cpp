class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        long long int a = x;
        long long int digit = 0, reverse = 0;
        while (x != 0)
        {
            digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        if (reverse == a)
            return true;
        else
            return false;
    }
};