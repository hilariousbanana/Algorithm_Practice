#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution1
{
public:
    string CombineString(vector<string>& word)
    {
        class Solution
        {
        public:
            string CombineString(vector<string>& word)
            {
                string temp = "";
                for (int i = 0; i < word.size(); i++)
                {
                    temp += word[i];
                }
                return temp;
            }

            bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
            {
                string combined1 = "";
                string combined2 = "";


                //1.모든 글자 합치기
                combined1 = CombineString(word1);
                combined2 = CombineString(word2);

                //2.string 두개 비교
                /*
                if(combined1.size() == combined2.size())
                {
                    for (int i = 0; i < word1.size(); i++)
                    {
                        if (combined1[i] != combined2[i])
                        {
                            return false;
                        }
                    }
                     return true;
                }
                */
                if (combined1 == combined2)
                {
                    return true;
                }
                return false;
            }
        };
    }
};