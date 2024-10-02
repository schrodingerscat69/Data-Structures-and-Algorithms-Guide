/* Searching in Matrix structure element-wise*/

#include <bits/stdc++.h>
using namespace std;

bool searchInMatrix(vector<vector<int> >& arr, int x)
{
	int m = arr.size(), n = arr[0].size();

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == x)
				return true;
		}

	}
	return false;
}

// Driver program to test the search algorithm
int main()
{
	int x = 8;
	vector<vector<int> > arr
		= {{0, 6, 8, 9, 11},{20, 22, 28, 29, 31},{36, 38, 50, 61, 63},
			{64, 66, 100, 122, 128}};
	
	if (searchInMatrix(arr, x))
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	
	return 0;
}
