#include <iostream>
using namespace std;

int main()
{
    int a = 5; // Define the size of the square grid

    // Loop for each row
    for (int row = 0; row < a; row++)
    {
        // Loop for each column
        for (int col = 0; col < a; col++)
        {
            // Check if the current cell is on the boundary
            if (row == 0 || col == 0 || row == a - 1 || col == a - 1)
            {
                // If the current cell is on the boundary, print '*'
                cout << "*";
            }
            else
            {
                // If the current cell is not on the boundary, print ' '
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after printing all columns in the current row
    }
    return 0; // Indicate successful execution of the program
}
