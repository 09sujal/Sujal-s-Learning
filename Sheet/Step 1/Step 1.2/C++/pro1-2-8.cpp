#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 0; row < a; row++) // row to less than input
    {

        // Starting spaces
        for (int col = 0; col < row; col++) // col to less than row
        {
            cout << " ";
        }

        // Stars
        for (int col = 0; col < (2 * a - (2 * row + 1)); col++) // col to less than --(2 multiply input subtract (2 multiply row plus 1))--
        {
            cout << "*"; // print stars
        }

        // Ending spaces
        for (int col = 0; col < row; col++) // col to less than row
        {
            cout << " ";
        }

        cout << endl; // for new line
    }

    return 0;
}
