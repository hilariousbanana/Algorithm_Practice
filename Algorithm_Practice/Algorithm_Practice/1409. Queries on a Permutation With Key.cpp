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
        //n이 리스트의 몇번째 숫자인가?

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
        //해당 숫자를 맨 앞으로 옮겨준다.
        list.insert(list.begin(), n);

        return temp;
    }
};