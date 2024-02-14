#include <iostream>
using namespace std;

int main()
{
    int a = 5;             // Define the number of rows
    int space = 2 * a - 2; // Calculate the initial number of spaces

    // Loop for each row
    for (int row = 1; row <= 2 * a - 1; row++)
    {
        int star = row; // Initialize the number of stars for the current row
        if (star > a)
            star = 2 * a - row; // Adjust the number of stars for the second half of the pattern

        // Loop to print stars
        for (int col = 1; col <= star; col++)
        {
            cout << "*";
        }

        // Loop to print spaces
        for (int col = 0; col <= space; col++)
        {
            cout << " ";
        }

        // Loop to print stars
        for (int col = 1; col <= star; col++)
        {
            cout << "*";
        }
        cout << endl; // Move to the next line after printing stars and spaces for the current row

        // Adjust the number of spaces for the next row
        if (row < a)
            space -= 2; // Decrease spaces for the upper half of the pattern
        else
            space += 2; // Increase spaces for the lower half of the pattern
    }

    return 0; // Indicate successful execution of the program
}
