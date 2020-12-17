class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int result = 0;
        int temp = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                temp++;
            }
            else
            {
                temp--;
            }

            if (temp == 0)
            {
                result++;
            }
        }

        return result;
    }
};