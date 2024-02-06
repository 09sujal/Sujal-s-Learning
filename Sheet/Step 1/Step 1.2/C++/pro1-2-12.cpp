#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int space = 2*(a-1);
    for (int row = 1; row <= a; row++)
    {
        // 1st pattern
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        
        //space
        for(int col = 1; col <= space; col++){
            cout << " ";
        }


        // 2nd pattern
        for (int col = row; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;
        space-=2;
    }
}