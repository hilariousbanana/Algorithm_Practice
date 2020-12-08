#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
                    cout << arr[i];
                }
                left++;
                right ++;
            }
            cout << endl;
            length += 2;
            turn--;
        }

        return result;
    }
};

int main()
{
    vector<int> temp = { 1, 2, 3 };
    Solution sol;

    sol.sumOddLengthSubarrays(temp);
}
