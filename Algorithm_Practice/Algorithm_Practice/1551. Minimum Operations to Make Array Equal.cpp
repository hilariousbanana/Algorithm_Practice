class Solution
{
public:
    int minOperations(int n)
    {
        int result = 0;
        vector<int> list(n);
        int target = 0;

        list = createVector(list, n);
        target = (list[list.size() - 1] + list[0]) / 2;

        for (int i = 0; i < list.size() / 2; i++)
        {
            result += target - list[i];
        }

        return result;
    }
private:
    vector<int> createVector(vector<int>& list, int n)
    {
        for (int i = 0; i < n; i++)
        {
            list[i] = (2 * i) + 1;
        }

        return list;
    }
};