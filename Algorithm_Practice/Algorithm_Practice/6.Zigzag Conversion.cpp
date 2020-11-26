using namespace std;
#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
	int GetColumn(string s, int numRows)
	{
		if (numRows == 1) return 1;
		// ����� ���� ����
		int mid = numRows - 2;
		// �� ����� ���� ����
		int den = numRows + mid;
		// ��
		int quo = s.size() / den;
		// ������
		int rem = s.size() % den;

		if (rem == 0)
		{
			return quo * (1 + mid);
		}

		return quo * (1 + mid) + (rem > numRows ? (1 + rem - numRows) : 1);
	}

	string convert(string s, int numRows) {
		string result = "";
		string temp = s;

		int column = GetColumn(s, numRows);
		int index = 0;
		int blockIndex = 0;      // ���° �������
		int countIndex = 0;

		vector<vector<string>> text(column, vector<string>(numRows));


		if (numRows == 1)
		{
			return s;
		}

		for (int i = 0; i < column; i++)
		{
			for (int j = 0; j < numRows; j++)
			{
				if ((i == (numRows - 1) * blockIndex ||
					(i != (numRows - 1) * blockIndex && i + j == (numRows - 1) + (numRows - 1) * blockIndex)) &&
					index != s.size())
				{
					text[i][j] = temp[index];
					index++;

					if (countIndex >= numRows * (numRows - 1))
					{
						blockIndex++;
						countIndex = 0;
					}
				}
				else
				{
					//text[i][j] = *" ";
				}
				countIndex++;
			}
			cout << endl;
		}

		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < column; j++)
			{
				result += text[j][i];
			}
		}

		return result;
	}
};