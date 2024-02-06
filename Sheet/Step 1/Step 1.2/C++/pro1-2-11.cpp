#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int num = 1;

    for (int row = 0; row < a; row++)
    {
        int num2 = 0;
        for (int col = 1; col <= num; col++)
        {
            num2 = (row + col) & 1;
            cout << num2 << " ";
        }
        cout << endl;
        num++;
    }
    return 0;
}