#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int num = 1;

    for (int row = 1; row <= a; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}