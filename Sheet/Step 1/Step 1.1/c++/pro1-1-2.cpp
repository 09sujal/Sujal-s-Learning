#include <iostream>
using namespace std;

int main()
{

   string a;
   cin >> a;

   if (a == "Integer")
   {
      cout << 4;
   }
   else if (a == "Long")
   {
      cout << 8;
   }
   else if (a == "Float")
   {
      cout << 4;
   }
   else if (a == "Double")
   {
      cout << 8;
   }
   else if (a == "Character")
   {
      cout << 1;
   }
   else
   {
      cout << "Invalid" << endl;
   }
   return 0;
}