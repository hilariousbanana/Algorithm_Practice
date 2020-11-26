#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool IsPalindromic(string s)
    {
        string temp = "";

        for (int i = s.size() - 1; i >= 0; i--)
        {
            temp += s[i];
        }

        if (s == temp)
        {
            return true;
        }

        return false;
    }

    string longestPalindrome(string s)
    {
        string result = "";

        for (int i = 0; i < s.size(); i++)
        {
            string check = "";

            for (int j = i; j < s.size(); j++)
            {
                check += s[j];
                if (IsPalindromic(check))
                {
                    if (check.size() > result.size())
                    {
                        result = check;
                    }
                }
            }
        }

        return result;
    }
};

#define EXAMPLE "ibvjkmpyzsifuxcabqqpahjdeuzaybqsrsmbfplxycsafogotliyvhxjtkrbzqxlyfwujzhkdafhebvsdhkkdbhlhmaoxmbkqiwiusngkbdhlvxdyvnjrzvxmukvdfobzlmvnbnilnsyrgoygfdzjlymhprcpxsnxpcafctikxxybcusgjwmfklkffehbvlhvxfiddznwumxosomfbgxoruoqrhezgsgidgcfzbtdftjxeahriirqgxbhicoxavquhbkaomrroghdnfkknyigsluqebaqrtcwgmlnvmxoagisdmsokeznjsnwpxygjjptvyjjkbmkxvlivinmpnpxgmmorkasebngirckqcawgevljplkkgextudqaodwqmfljljhrujoerycoojwwgtklypicgkyaboqjfivbeqdlonxeidgxsyzugkntoevwfuxovazcyayvwbcqswzhytlmtmrtwpikgacnpkbwgfmpavzyjoxughwhvlsxsgttbcyrlkaarngeoaldsdtjncivhcfsaohmdhgbwkuemcembmlwbwquxfaiukoqvzmgoeppieztdacvwngbkcxknbytvztodbfnjhbtwpjlzuajnlzfmmujhcggpdcwdquutdiubgcvnxvgspmfumeqrofewynizvynavjzkbpkuxxvkjujectdyfwygnfsukvzflcuxxzvxzravzznpxttduajhbsyiywpqunnarabcroljwcbdydagachbobkcvudkoddldaucwruobfylfhyvjuynjrosxczgjwudpxaqwnboxgxybnngxxhibesiaxkicinikzzmonftqkcudlzfzutplbycejmkpxcygsafzkgudy")

int main()
{
    Solution mySol;
    cout << mySol.longestPalindrome(EXAMPLE) << endl;
}