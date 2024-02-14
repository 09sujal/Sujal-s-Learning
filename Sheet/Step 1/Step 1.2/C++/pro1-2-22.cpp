#include <iostream>
using namespace std;

int main()
{
    int n = 4; // Define the value of 'n'

    // Loop for each row
    for (int i = 0; i < 2 * n - 1; i++)
    {
        // Loop for each column
        for (int j = 0; j < 2 * n - 1; j++)
        {
            // Calculate the distances to the top, bottom, right, and left edges
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;
            // Calculate the minimum distance among top, bottom, right, and left
            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl; // Move to the next line after printing all columns in the current row
    }

    return 0; // Indicate successful execution of the program
}
