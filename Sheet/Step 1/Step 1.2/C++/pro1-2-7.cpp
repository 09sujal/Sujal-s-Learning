#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 0; row < a; row++) // row till less than input
    {

        // spaces
        for (int col = 0; col < a - row - 1; col++) // col till less than --input subtract row and 1--
        {
            cout << " "; // print space
        }
        // stars
        for (int col = 0; col < 2 * row + 1; col++) // col till less than --2 multiplied by row plus 1--
        {
            cout << "*"; // print star
        }
        // spaces
        for (int col = 0; col < a - row - 1; col++) // col till less than --input subtract row and 1--
        {
            cout << " "; // print space
        }
        cout << endl; // new line
    }

    return 0;
}