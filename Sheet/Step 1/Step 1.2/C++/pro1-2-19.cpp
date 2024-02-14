#include <iostream>
using namespace std;

int main()
{
    int a = 5; // Define the number of rows
    int s = 0; // Initialize space count

    // Upper half of the pattern
    for (int row = 0; row < a; row++)
    {
        // Loop for each row in the upper half
        // Stars
        for (int col = 1; col <= a - row; col++)
        {
            // Loop to print stars
            cout << "*";
        }

        // Spaces
        for (int col = 0; col < s; col++)
        {
            // Loop to print spaces
            cout << " ";
        }

        // Stars
        for (int col = 1; col <= a - row; col++)
        {
            // Loop to print stars
            cout << "*";
        }
        s += 2;       // Increase space count for the next row
        cout << endl; // Move to the next line after printing the upper half pattern
    }

    s = 2 * a - 2; // Reset space count for the lower half of the pattern

    // Lower half of the pattern
    for (int row = 1; row <= a; row++)
    {
        // Loop for each row in the lower half
        // Stars
        for (int col = 1; col <= row; col++)
        {
            // Loop to print stars
            cout << "*";
        }

        // Spaces
        for (int col = 0; col < s; col++)
        {
            // Loop to print spaces
            cout << " ";
        }

        // Stars
        for (int col = 1; col <= row; col++)
        {
            // Loop to print stars
            cout << "*";
        }
        s -= 2;       // Decrease space count for the next row
        cout << endl; // Move to the next line after printing the lower half pattern
    }

    return 0; // Indicate successful execution of the program
}
