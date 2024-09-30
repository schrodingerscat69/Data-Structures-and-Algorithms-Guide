/* To compare strings, define function 
 * 		to compare values as follows:*/
  // 1. if string1 != string2, return False
  // 2. if both strings are equal lexicographically, return True
 
#include <iostream>

using namespace std;

bool stringCompare(const string& str1, const string& str2)
{
	int l1 = str1.length();
	int l2 = str2.length();
	int lmin = min(l1, l2);

	for (int i=0; i < lmin; i++)
	{
	
		int str1_ch = static_cast<int>(str1[i]);
		int str2_ch = static_cast<int>(str2[i]);

		if (str1_ch != str2_ch)
		{
			return false;
		}

	}

	if (l1 != l2)
	{
		return false;
	} else {
		return true;
	}

}

int main()
{
	string string1 = "These are not equal";
	string string2 = "Thiz a notch eeqel";
	string string3 = "This is equal";
	string string4 = "This is equal";

	cout << "Comparing " << string1 << " and " << string2 <<" : " <<
		stringCompare(string1, string2) << endl;
	cout << "Comparing " << string3 << " and " << string4 <<" : " <<
        stringCompare(string3, string4) << endl;
	cout << "Comparing " << string1 << " and " << string4 <<" : " <<
        stringCompare(string1, string4) << endl;
	
	return 0;
}


