class Solution
{
public:
    int getDecimalValue(ListNode* head)
    {
        /*
        int result = 0;
        int pow = 0;
        vector<int> repo;

        while(true)
        {
            int temp = head->val;
            repo.push_back(temp);
            head = head->next;
            if(pow == 0)
            {
                pow = 1;
            }
            else
            {
                pow *= 2;
            }
            if(head == nullptr) break;
        }

        for(int i = repo.size()-1; i >= 0; i--)
        {
            result += repo[i] * pow;
            pow /=2;
        }

        return result;
        */
        int output = 0;
        while (head)
        {
            if (head->val == 1)
            {
                output *= 2;
                output += 1;
            }
            else
            {
                output *= 2;
            }
            head = head->next;
        }
        return output;
    }
};