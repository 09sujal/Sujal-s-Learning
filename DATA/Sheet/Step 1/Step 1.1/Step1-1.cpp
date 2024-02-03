#include <bits/stdc++.h>
using namespace std;
void one(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        cout << 1;
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }
}

int two(string type)
{

    if (type == "Integer")
    {
        return 4;
    }
    else if (type == "Long")
    {
        return 8;
    }
    else if (type == "Float")
    {
        return 4;
    }
    else if (type == "Double")
    {
        return 8;
    }
    else if (type == "Character")
    {
        return 1;
    }
    else
    {
        cout << "Invalid Input";
    }
}

string three(int a, int b) {
	if (a > b){
        return "greater";
    }
    else if (b > a){
        return "smaller";
    }
    else {
        return "equal";
    }
}

string four;


int main()
{
    cout<< two("Integer");
    return 0;
}