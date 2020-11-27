#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int SumArray(const vector<int>& nums, int n)
    {
        int temp = 0;
        for (int i = 0; i <= n; i++)
        {
            temp += nums[i];
        }
        return temp;
    }

    vector<int> runningSum(vector<int>& nums)
    {
        vector<int> result;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            result.push_back(sum);
        }

        return result;
    }
};