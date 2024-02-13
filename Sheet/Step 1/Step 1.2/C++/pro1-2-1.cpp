#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 1; row <= a; row++) // row to input
    {
        for (int col = 1; col <= a; col++) // col to input
        {
            cout << "* "; // print *
        }
        cout << "\n"; // for new line
    }
}
