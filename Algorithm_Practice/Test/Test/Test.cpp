#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int MaxNumber(vector<int>& list)
    {
        int max = 0;

        for (int i = 0; i < list.size(); i++)
        {
            if (list[i] > max)
            {
                max = list[i];
            }
        }
        return max;
    }

    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
    {
        int result = 0;
        vector<int> sideline, frontline;
        vector<vector<int>> temp(grid.size(), vector<int>(grid[0].size()));

        for (int i = 0; i < temp.size(); i++)
        {
            for (int j = 0; j < temp.size(); j++)
            {
                temp[i].push_back(grid[j][i]);
            }
        }

        for (int i = 0; i < grid.size(); i++)
        {
            sideline.push_back(MaxNumber(grid[i]));
            frontline.push_back(MaxNumber(temp[i]));
        }

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                if (sideline[i] > frontline[i])
                {
                    result += frontline[i] - grid[i][j];
                }
                else
                {
                    result += sideline[i] - grid[i][j];
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<vector<int>> temp = { { 0, 1, 2}, { 1, 2, 3 }, { 4, 4, 4 } };
    Solution sol;

    cout << sol.maxIncreaseKeepingSkyline(temp) << endl;
}
