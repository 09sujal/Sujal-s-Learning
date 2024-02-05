#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 1; row <= a; row++) // row to a
    {
        for (int col = 1; col <= a; col++) // col to a
        {
            cout << "* "; // print *
        }
        cout << "\n"; // for new line
    }
}
