// This program will tell if u r eligible for job by AGE

// Version 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible for job";
    }
    else if (age >= 18)
    {
        if (age >= 55 && age <= 57)
        {
            cout << "Eligible for job but retirement soon";
        }
        else if (age > 57)
        {
            cout << "Retirement time";
        }
        else
        {
            cout << "You eligible for job";
        }
    }
    else
    {
        cout << "Invalid age";
    }
    return 0;
}

// Version 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible for job";
    }
    else if (age <= 57)
    {
        cout << "You eligible for job";
        if (age >= 55)
        {
            cout << ", but retirement soon";
        }
    }
    else
    {
        cout << "Retirement time";
    }

    return 0;
}