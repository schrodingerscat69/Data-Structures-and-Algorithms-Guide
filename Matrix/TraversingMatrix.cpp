/* To traverse a 2D matrix, use two for loops*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Initializing a 2D vector with arbitrary values
	vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12} };
	
	// Traversing over all the rows
	for (int i = 0; i < arr.size(); i++)
	{
		// Traversing over all columns of each row
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";

		}
		cout << endl;
	}
	
	return 0;
}
