#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int space = 2 * (a - 1);           // Calculate initial space count
    for (int row = 1; row <= a; row++) // row to input
    {
        // 1st pattern: print numbers from 1 to row
        for (int col = 1; col <= row; col++) // col to row
        {
            cout << col; // cut col number
        }

        // Space between patterns
        for (int col = 1; col <= space; col++)
        {
            cout << " "; // cout space
        }

        // 2nd pattern: print numbers from row to 1
        for (int col = row; col >= 1; col--)
        {
            cout << col; // cout column number
        }
        cout << endl; // for new line
        space -= 2;   // Decrease space count for next row
    }
    return 0;
}
