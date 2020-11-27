#include<vector>
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool IsInclude(const string s, char c)
    {
        if (s.find(c) != string::npos)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int lengthOfLongestSubstring(string s)
    {
        int result = 0;
        const char* list = s.c_str();

        for (int i = 0; i < s.size(); i++)
        {
            string save = "";

            for (int j = i; j < s.size(); j++)
            {
                if (IsInclude(save, list[j]))
                {

                    break;
                }
                save += list[j];
                if (save.size() > result)
                {
                    result = save.size();
                }
            }
        }
        return result;
    }
};