/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode* AddNode(ListNode* head, ListNode* NewNode)
    {
        if (head == nullptr)
        {
            head = NewNode;
        }
        else
        {
            ListNode* temp = head;
            while (temp != nullptr)
            {
                if (temp->next == nullptr)
                {
                    temp->next = NewNode;
                    break;
                }
                temp = temp->next;
            }
        }
        return head;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* result = nullptr;

        int upper = 0;

        while (l1 != nullptr || l2 != nullptr || upper > 0)
        {
            int  sum = upper;
            upper = 0;

            if (l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }


            if (sum >= 10)
            {
                upper = sum / 10;
                sum = sum % 10;
            }

            result = AddNode(result, new ListNode(sum));
        }

        return result;
    }
};