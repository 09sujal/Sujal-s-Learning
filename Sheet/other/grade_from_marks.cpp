//This program will tell grade based upon Marks.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin >> marks ;
    if (marks <= 25)
    {
        cout << "F";
    }
    else if (25 >= marks && marks <= 44)
    {
        cout << "E";
    }
    else if (45 >= marks && marks <= 49)
    {
        cout << "D";
    }
    else if (50 >= marks && marks <= 59)
    {
        cout << "C";
    }
    else if (60 >= marks && marks <= 79)
    {
        cout << "B";
    }
    else if (80 >= marks && marks <= 100)
    {
        cout << "A";
    }
    else
    {
        cout << "Invalid Marks";
    }
    return 0;
}