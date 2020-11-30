#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    /*
    vector<int> AscendingOrder(vector<int>& list)
    {
        for (int i = 0; i < list.size() - 1; i++)
        {
            for (int j = i + 1; j <= list.size() -1; j++)
            {
                if (list[i] > list[j])
                {
                    int temp = 0;
                    temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
        return list;
    }
    */

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

    int maxWidthOfVerticalArea(vector<vector<int>>& points)
    {
        vector<int> xlist(points.size());
        vector<int> differences;

        for (int i = 0; i < points.size(); i++)
        {
            xlist[i] = points[i][0];
        }

        sort(xlist.begin(), xlist.end());

        for (int i = 0; i < xlist.size() - 1; i++)
        {
            int temp = xlist[i + 1] - xlist[i];
            differences.push_back(temp);
        }

        return MaxNumber(differences);
    }
};