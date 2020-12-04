class Solution
{
public:
    vector<int> processQueries(vector<int>& queries, int m)
    {
        vector<int> result;
        vector<int> P;

        for (int i = 0; i < m; i++)
        {
            P.push_back(i + 1);
        }

        for (int i = 0; i < queries.size(); i++)
        {
            result.push_back(UpdateList(P, queries[i]));
        }


        return result;
    }
private:
    int UpdateList(vector<int>& list, int n)
    {
        int temp = 0;
        //n�� ����Ʈ�� ���° �����ΰ�?

        for (auto iter = list.begin(); iter != list.end();)
        {
            if (*iter == n)
            {
                iter = list.erase(iter);
                break;
            }
            temp++;
            iter++;
        }
        //�ش� ���ڸ� �� ������ �Ű��ش�.
        list.insert(list.begin(), n);

        return temp;
    }
};