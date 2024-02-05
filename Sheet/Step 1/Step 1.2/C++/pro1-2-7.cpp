#include <iostream>
using namespace std;

int main()
{
    int a = 5;

for (int row = 0; row < a; row++){//row to input

    //for space
    for (int col = 0; col < a-row-1; col++) {
        cout<< " ";
    }
    
    //for space
    for (int col = 0; col < 2*row+1; col++) {
        cout<< "*";
    }

    //for space
    for (int col = 0; col < a-row-1; col++) {
        cout<< " ";
    }
    cout<< endl;

    
}
    
}
