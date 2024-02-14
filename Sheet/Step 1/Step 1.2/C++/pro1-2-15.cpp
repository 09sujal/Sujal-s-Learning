#include <iostream>
using namespace std;

int main()
{
    int a = 5; // Define the number of rows

    for (int row = a; row >= 1; row--)
    {
        // Loop for each row starting from 'a' and going down to 1
        for (char ch = 'A'; ch < 'A' + row; ch++)
        {
            // Loop to print characters from 'A' to 'A' + row (excluding 'A' + row)
            cout << ch << ' '; // Print the character followed by a space
        }
        cout << endl; // Move to the next line after printing characters for the current row
    }
    return 0; // Indicate successful execution of the program
}
