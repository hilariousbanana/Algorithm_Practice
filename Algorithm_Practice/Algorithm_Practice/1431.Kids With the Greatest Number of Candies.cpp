#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int LargestCandy(vector<int>& candies)
    {
        int max = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] > max)
            {
                max = candies[i];
            }
        }
        return max;
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool> result;

        int greatestCandy = LargestCandy(candies);

        for (int i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= greatestCandy)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};