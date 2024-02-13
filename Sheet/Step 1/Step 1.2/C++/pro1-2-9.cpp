#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    // pattern 1
    for (int row = 0; row < a; row++) // row to less than input
    {
        for (int col = 0; col < a - row - 1; col++) // col to input subtracted by row - 1
        {
            cout << " "; // print space
        }
        for (int col = 0; col < 2 * row + 1; col++) // col to --2 multiplied by row+1--
        {
            cout << "*"; // print stars
        }
        for (int col = 0; col < a - row - 1; col++) // col to input subtracted by row-1
        {
            cout << " "; // print space
        }
        cout << endl; // for new line
    }

    // pattern 2
    for (int row = 0; row < a; row++) // row to less than input
    {
        for (int col = 0; col < row; col++) // col to row
        {
            cout << " "; // print space
        }
        for (int col = 0; col < (2 * a - (2 * row + 1)); col++) // col to less than --(2 multiplied by input subtracted by (2 * row + 1))--
        {
            cout << "*"; // print star
        }
        for (int col = 0; col < row; col++) // col to less than row
        {
            cout << " "; // print star
        }
        cout << endl; // for new line
    }

    return 0;
}
