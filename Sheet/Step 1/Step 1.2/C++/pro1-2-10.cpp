#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 0; row < a; row++) // row to less than input
    {
        for (int col = 0; col <= row; col++) // col to row
        {
            cout << "*"; // print star
        }

        cout << endl; // for new line
    }

    for (int row = a; row > 0; row--) // row to 0, post decrementation
    {
        for (int col = 1; col < row; col++) // col to less than row
        {
            cout << "*"; // print star
        }

        cout << endl; // for new line
    }

    return 0;
}
