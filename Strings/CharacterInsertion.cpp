/* To insert any character/string in a string*/
    // 1. A character/string is to be inserted in the string (ch)
    // 2. An index of character/string where it is to be inserted

#include <iostream>
#include <string>

using namespace std;

// Function to demonstrate insertion 
void insertDemo(string str, string ch, int k)
{
    str.insert(k,ch);
    cout << "Modified String: " << str << endl;
}

// Driver code
int main()
{
    string str("Tyrannosaurus Rex");
    string ch = " 'T' ";
    int k = 13;

    cout << "Original String: " << str << endl;
    insertDemo(str, ch, k);

    return 0;
}
