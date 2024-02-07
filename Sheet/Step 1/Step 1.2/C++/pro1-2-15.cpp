 #include <iostream>
using namespace std;
int main()
{

    int a = 5;

    for (int row = a; row >= 1; row--)
    {
        for (char ch = 'A'; ch < 'A' + row; ch++)
        {
            cout << ch << ' ';
        }
        cout << endl;
        
    }
    return 0;
}
