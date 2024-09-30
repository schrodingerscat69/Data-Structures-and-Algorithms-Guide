/* Using index to access matrix elements*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Initializing a 2D vector with values
	vector<vector<int>> arr = {{1,2,3}, {4,5,6}, {7,8,9}};

	// Accessing elements of the 2D vector
	cout << "1st element is: " << arr[0][0] << endl;
	cout << "3rd element of 2nd row is: " << arr[1][2] << endl;
	cout << "2nd element of 3rd row is: " << arr[2][1] << endl;

	return 0;
}
