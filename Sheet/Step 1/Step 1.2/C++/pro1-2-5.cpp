#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row =a; row >= 1; row--) // row to 1 for reverse print
    {
        for (int col = 1; col <= row; col++) // col to row
        {
            cout << "* "; // print *
        }
        cout << "\n"; // for new line
    }
}
