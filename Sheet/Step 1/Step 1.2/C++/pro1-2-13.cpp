#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int num = 1; // declare a new int num = 1

    for (int row = 1; row <= a; row++) // row to a
    {
        for (int col = 1; col <= row; col++) // col to row
        {
            cout << num << " "; // print num and themn space
            num++;              // increment num by 1
        }
        cout << endl; // for new line
    }
}