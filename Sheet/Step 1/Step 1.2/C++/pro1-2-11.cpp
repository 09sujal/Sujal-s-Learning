#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int num = 1; // declare a new int num = 1

    for (int row = 0; row < a; row++) // row to less than input
    {
        int num2 = 0;                        // declare a new int num2 = 0
        for (int col = 1; col <= num; col++) // col to num
        {
            num2 = (row + col) & 1; // perform a bitwise AND operation between the values of (row + col) and 1
            cout << num2 << " ";    // print num2 and space
        }
        cout << endl; // for new line
        num++;        // increment num by 1
    }
    return 0;
}