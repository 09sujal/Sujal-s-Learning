#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    // pattern 1
    for (int row = 0; row < a; row++)
    {
        for (int col = 0; col < a - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < a - row - 1; col++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // pattern 2
    for (int row = 0; row < a; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < (2*a-(2*row+1)); col++)
        {
            cout << "*";
        }
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
