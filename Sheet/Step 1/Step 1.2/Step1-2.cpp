#include <bits/stdc++.h>
using namespace std;

int ptrn1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int ptrn4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int ptrn5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int ptrn7(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn8(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn11(int n)
{
    int num1 = 1;
    for (int i = 1; i <= n; i++)
    {
        int num2 = 1;
        for (int j = 0; j < i; j++)
        {
            num2 = (i + j) & 1;
            cout << num2 << " ";
        }
        cout << endl;
    }
}

int ptrn12(int n)
{
    int spaces = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        spaces -= 2;
    }
}

int ptrn13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int ptrn14(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

int ptrn15(int n)
{

    for (int i = n; i >= 1; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

int ptrn16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}

int ptrn17(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int bp = (2 * i + 1) / 2;

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= bp)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int ptrn19(int n)
{
    int inis = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
        inis += 2;
    }

    inis = (2 * n - 2);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
        inis -= 2;
    }
}

int ptrn20(int n)
{

    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int star = i;

        if (i > n)
        {
            star = 2 * n - i;
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
        if (i < n)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
    }
}

int ptrn21(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int ptrn22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            int t = i;
            int b = j;
            int r = (2 * n - 2) - j;
            int l = (2 * n - 2) - i;

            cout << (n - min(min(t, b), min(l, r)));
        }
        cout << endl;
    }
}

void helpme()
{
    cout << "1 - Grid of Stars or a 3x3 Grid\n"
            "2 - Right-angled Triangle or a Staircase\n"
            "3 - Number Triangle or a Right-angled Number Triangle\n"
            "4 - Number Triangle or a Right-angled Number Triangle (Each row same Number)\n"
            "5 - Inverted Right-angled Triangle or an Upside-down Right-angled Triangle\n"
            "6 - Inverted Number Triangle or a Decreasing Number Triangle\n"
            "7 - Isosceles Triangle or a Pyramid\n"
            "8 - Inverted Isosceles Triangle or an Inverted Pyramid\n"
            "9 - Double-Sided Pyramid or an Hourglass Pattern\n"
            "10 - Diamond Pattern or a Rhombus\n"
            "11 - Binary Triangle or a Binary Alternating Pattern\n"
            "12 - Number Crown\n"
            "13 - Number Triangle or a Right-angled Number Triangle\n"
            "14 - Alphabetic Triangle or a Right-angled Alphabetic Triangle\n"
            "15 - Inverted Alphabetic Triangle or an Upside-down Alphabetic Triangle\n"
            "16 - Repeated Alphabetic Triangle or a Staircase Alphabetic Pattern\n"
            "17 - Diamond Alphabetic Pattern or a Mirror Image Alphabetic Diamond\n"
            "18 - Inverted Alphabetic Triangle or an Upside-down Alphabetic Triangle\n"
            "19 - Hollow Diamond or a Diamond with Spaces\n"
            "20 - Symmetry Pattern\n"
            "21 - Square or a Box\n"
            "22 - Number Diamond or a Symmetric Numeric Pattern\n"
         << endl;
}

int main()
{
    cout << "\n\n1 - Grid of Stars or a 3x3 Grid\n"
            "2 - Right-angled Triangle or a Staircase\n"
            "3 - Number Triangle or a Right-angled Number Triangle\n"
            "4 - Number Triangle or a Right-angled Number Triangle (Each row same Number)\n"
            "5 - Inverted Right-angled Triangle or an Upside-down Right-angled Triangle\n"
            "6 - Inverted Number Triangle or a Decreasing Number Triangle\n"
            "7 - Isosceles Triangle or a Pyramid\n"
            "8 - Inverted Isosceles Triangle or an Inverted Pyramid\n"
            "9 - Double-Sided Pyramid or an Hourglass Pattern\n"
            "10 - Diamond Pattern or a Rhombus\n"
            "11 - Binary Triangle or a Binary Alternating Pattern\n"
            "12 - Number Crown\n"
            "13 - Number Triangle or a Right-angled Number Triangle\n"
            "14 - Alphabetic Triangle or a Right-angled Alphabetic Triangle\n"
            "15 - Inverted Alphabetic Triangle or an Upside-down Alphabetic Triangle\n"
            "16 - Repeated Alphabetic Triangle or a Staircase Alphabetic Pattern\n"
            "17 - Diamond Alphabetic Pattern or a Mirror Image Alphabetic Diamond\n"
            "18 - Inverted Alphabetic Triangle or an Upside-down Alphabetic Triangle\n"
            "19 - Hollow Diamond or a Diamond with Spaces\n"
            "20 - Symmetry Pattern\n"
            "21 - Square or a Box\n"
            "22 - Number Diamond or a Symmetric Numeric Pattern\n"
         << endl;

    while (true)
    {
        int option;
        cout << "\nEnter from 1 to 22 or '0' to exit or '911' for help" << endl;
        cin >> option;

        if (option == 0)
        {
            return 0;
        }
        else
        {
            switch (option)
            {
            case 911:
                helpme();
                break;
            case 1:
                int n1;
                cout << "Enter Number\n";
                cin >> n1;
                cout<<"\n";
                ptrn1(n1);
                break;
            case 2:
                int n2;
                cout << "Enter Number\n";
                cin >> n2;
                cout<<"\n";
                ptrn2(n2);
                break;
            case 3:
                int n3;
                cout << "Enter Number\n";
                cin >> n3;
                cout<<"\n";
                ptrn3(n3);
                break;
            case 4:
                int n4;
                cout << "Enter Number\n";
                cin >> n4;
                cout<<"\n";
                ptrn4(n4);
                break;
            case 5:
                int n5;
                cout << "Enter Number\n";
                cin >> n5;
                cout<<"\n";
                ptrn5(n5);
                break;
            case 6:
                int n6;
                cout << "Enter Number\n";
                cin >> n6;
                cout<<"\n";
                ptrn6(n6);
                break;
            case 7:
                int n7;
                cout << "Enter Number\n";
                cin >> n7;
                cout<<"\n";
                ptrn7(n7);
                break;
            case 8:
                int n8;
                cout << "Enter Number\n";
                cin >> n8;
                cout<<"\n";
                ptrn8(n8);
                break;
            case 9:
                int n9;
                cout << "Enter Number\n";
                cin >> n9;
                cout<<"\n";
                ptrn9(n9);
                break;
            case 10:
                int n10;
                cout << "Enter Number\n";
                cin >> n10;
                cout<<"\n";
                ptrn10(n10);
                break;
            case 11:
                int n11;
                cout << "Enter Number\n";
                cin >> n11;
                cout<<"\n";
                ptrn11(n11);
                break;
            case 12:
                int n12;
                cout << "Enter Number\n";
                cin >> n12;
                cout<<"\n";
                ptrn12(n12);
                break;
            case 13:
                int n13;
                cout << "Enter Number\n";
                cin >> n13;
                cout<<"\n";
                ptrn13(n13);
                break;
            case 14:
                int n14;
                cout << "Enter Number\n";
                cin >> n14;
                cout<<"\n";
                ptrn14(n14);
                break;
            case 15:
                int n15;
                cout << "Enter Number\n";
                cin >> n15;
                cout<<"\n";
                ptrn15(n15);
                break;
            case 16:
                int n16;
                cout << "Enter Number\n";
                cin >> n16;
                cout<<"\n";
                ptrn16(n16);
                break;
            case 17:
                int n17;
                cout << "Enter Number\n";
                cin >> n17;
                cout<<"\n";
                ptrn17(n17);
                break;
            case 18:
                int n18;
                cout << "Enter Number\n";
                cin >> n18;
                cout<<"\n";
                ptrn18(n18);
                break;
            case 19:
                int n19;
                cout << "Enter Number\n";
                cin >> n19;
                cout<<"\n";
                ptrn19(n19);
                break;
            case 20:
                int n20;
                cout << "Enter Number\n";
                cin >> n20;
                cout<<"\n";
                ptrn20(n20);
                break;
            case 21:
                int n21;
                cout << "Enter Number\n";
                cin >> n21;
                cout<<"\n";
                ptrn21(n21);
                break;
            case 22:
                int n22;
                cout << "Enter Number\n";
                cin >> n22;
                cout<<"\n";
                ptrn22(n22);
                break;
            default:
                cout << "Invalid Option. Choose from 1 to 22" << endl;
                break;
            }
        }
    }

    return 0;
}