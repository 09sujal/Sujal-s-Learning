#include <iostream>
using namespace std;

int main()
{
    int a = 4; // Define the number of rows

    for (int row = 0; row < a; row++)
    {
        // Loop for each row from 0 to 'a' - 1
        for (int col = 0; col < a - row - 1; col++)
        {
            // Loop to print spaces before the pattern
            cout << " ";
        }

        char ch = 'A';              // Initialize character 'A'
        int bp = (2 * row + 1) / 2; // Calculate the breakpoint for changing character direction
        for (int col = 1; col <= 2 * row + 1; col++)
        {
            // Loop to print the pattern characters
            cout << ch; // Print the character

            if (col <= bp)
            {
                // If the current column is before the breakpoint, increment the character
                ch++;
            }
            else
            {
                // Otherwise, decrement the character
                ch--;
            }
        }

        for (int col = 0; col < a - row - 1; col++)
        {
            // Loop to print spaces after the pattern
            cout << " ";
        }
        cout << endl; // Move to the next line after printing the pattern for the current row
    }
    return 0; // Indicate successful execution of the program
}
