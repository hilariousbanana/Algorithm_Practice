class Solution
{
public:
    int sumOddLengthSubarrays(vector<int>& arr)
    {
        int result = 0;
        int turn = (arr.size() + 1) / 2;
        int length = 1;

        while (turn != 0)
        {
            int left = 0, right = length;
            while (arr.size() - left >= length)
            {
                for (int i = left; i < right; i++)
                {
                    result += arr[i];
                }
                left++;
                right++;
            }
            length += 2;
            turn--;
        }

        return result;
    }
};