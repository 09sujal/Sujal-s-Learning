#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 0; row < a; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int row = a; row > 0; row--)
    {
        for (int col = 1; col < row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
