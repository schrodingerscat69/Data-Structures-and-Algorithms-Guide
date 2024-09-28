/*To access any character in s string by index */
    // 1. A non-empty string (str)
    // 2. An index of the character from where it is to be accessed (k)


#include <iostream>
#include <string>

using namespace std;

// Function to extract character by index
char accessCharbyIndex(string str, int k)
{
    return str[k];
}

// Driver code
int main()
{
    string str ("Hello World!");
    int k = 4;
    cout << accessCharbyIndex(str, k) << endl;

    return 0;
}