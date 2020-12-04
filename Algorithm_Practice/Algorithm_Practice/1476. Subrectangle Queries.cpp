class SubrectangleQueries
{
public:
	vector<vector<int>> rect, subrect;
	bool isUpdated = false;
	SubrectangleQueries(vector<vector<int>>& rectangle)
	{
		rect = rectangle;
		subrect = rect;
	}

	void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
	{
		isUpdated = true;
		int R1, R2, C1, C2 = 0;

		//if (row1 > row2)
		//{
		//    R1 = row2;
		//    R2 = row1;
		//    C1 = col2;
		//    C2 = col1;
		//}
		//else if (row1 == row2 && col1 > col2)
		//{
		//    R1 = row2;
		//    R2 = row1;
		//    C1 = col2;
		//    C2 = col1;
		//}
		//else
		//{
		//    R1 = row1;
		//    R2 = row2;
		//    C1 = col1;
		//    C2 = col2;
		//}

		R1 = row1;
		R2 = row2;
		C1 = col1;
		C2 = col2;

		for (int i = R1; i <= R2; i++)
		{
			if (R1 == R2)
			{
				for (int j = C1; j <= C2; j++)
				{
					subrect[i][j] = newValue;
				}
			}
			else
			{
				if (i == R1)
				{
					for (int j = C1; j < subrect[i].size(); j++)
					{
						subrect[i][j] = newValue;
					}
				}
				else if (R1 < i < R2)
				{
					for (int j = 0; j < subrect[i].size(); j++)
					{
						subrect[i][j] = newValue;
					}
				}
				else
				{
					for (int j = 0; j <= C2; j++)
					{
						subrect[i][j] = newValue;
					}
				}
			}

		}
	}

	int getValue(int row, int col)
	{
		if (isUpdated)
		{
			return subrect[row][col];
		}
		else
		{
			return rect[row][col];
		}
	}
};
