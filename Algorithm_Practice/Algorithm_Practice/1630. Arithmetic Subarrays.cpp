class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r)
    {
        vector<bool> result;

        for (int i = 0; i < l.size(); i++)
        {
            vector<int> subarray = createSubarray(nums, l[i], r[i]);
            result.push_back(CheckArithmetic(subarray));
        }

        return result;
    }

private:
    vector<int> createSubarray(vector<int>& list, int start, int end)
    {
        vector<int> temp;

        for (int i = start; i <= end; i++)
        {
            temp.push_back(list[i]);
        }

        sort(temp.begin(), temp.end());

        return temp;
    }

    bool CheckArithmetic(vector<int>& list)
    {
        bool isArithmetic = false;
        int temp = list[1] - list[0];

        for (int i = 0; i < list.size() - 1; i++)
        {
            if (list[i + 1] - list[i] == temp)
            {
                isArithmetic = true;
            }
            else
            {
                isArithmetic = false;
                break;
            }
        }

        return isArithmetic;
    }
};