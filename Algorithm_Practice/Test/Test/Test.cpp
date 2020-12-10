#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int countGoodTriplets(vector<int>& arr, int a, int b, int c)
	{
		int result = 0;
		int left = 0, mid = 1, right = 2; //index

		for (int i = left; i < arr.size() - 2; i++)
		{
			for (int j = mid; j < arr.size() - 1; j++)
			{
				if (abs(arr[i] - arr[j]) <= a)
				{
					for (int k = right; k < arr.size(); k++)
					{
						if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
						{
							result++;
							cout << arr[i] << arr[j] << arr[k] << endl;
						}
					}
				}
				right++;
			}
			mid++;
		}

		return result;
	}

};

int main()
{
	vector<int> temp = { 1, 1, 2, 2, 3 };
	Solution sol;

	sol.countGoodTriplets(temp, 0, 0, 1);
}
