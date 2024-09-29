#include <iostream>
#include <string>
 

int main()
{
    // Define the string
    std::string str = "Good Lob";

    // Get the index
    int index = 5;

    // Character we are replacing with
    char ch = 'J';

    // Print original string
    std::cout << "Original string: " << str << std::endl;

    str.replace(index, 1,1, ch);

    // Print modified string
    std::cout << "Modified string: " << str << std::endl;

    return 0;
}