#include <iostream>
using namespace std;

int main()
{
     string type;

     cin >> type;

     if (type == "Integer"){
        cout << "4 bytes";
     }
     else if (type == "Long"){
        cout << "8 bytes";
     }
     else if (type == "Float"){
        cout << "4 bytes";
     }
     else if (type == "Double"){
        cout << "8 bytes";
     }
     else if (type == "Character"){
        cout << "1 bytes";
     }
     else {
        cout << "invalid Input";
     }
     
    return 0;
}