#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 0; row < a; row++)
    {
        for (int col = 0; col < a; col++)
        {
            if (row == 0 || col == 0 || row == a - 1 || col == a - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}