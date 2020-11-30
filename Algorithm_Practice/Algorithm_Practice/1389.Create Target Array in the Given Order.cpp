class Solution
{
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
    {
        vector<int> result(index.size());

        for (int i = 0; i < index.size(); i++)
        {
            result[i] = -1;
        }

        for (int i = 0; i < index.size(); i++)
        {
            if (result[index[i]] < 0)
            {
                result[index[i]] = nums[i];
            }
            else
            {
                for (int j = index.size() - 2; j >= index[i]; j--)
                {
                    result[j + 1] = result[j];
                }
                result[index[i]] = nums[i];
            }
        }


        return result;
    }
};