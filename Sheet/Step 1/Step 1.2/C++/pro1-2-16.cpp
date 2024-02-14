#include <iostream>
using namespace std;

int main()
{
    int a = 5;     // Define the number of rows
    char ch = 'A'; // Initialize character 'A'

    for (int row = 1; row <= a; row++)
    {
        // Loop for each row from 1 to 'a'
        for (int col = 1; col <= row; col++)
        {
            // Loop to print characters from 'A' to 'A' + row (inclusive)
            cout << ch << ' '; // Print the character followed by a space
        }
        cout << endl; // Move to the next line after printing characters for the current row
        ch += 1;      // Increment the character for the next row
    }
    return 0; // Indicate successful execution of the program
}
