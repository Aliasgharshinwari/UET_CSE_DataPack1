#include <iostream>

using namespace std;
// Selection Statements

// Bitwise Operators & (AND), | (OR), ^(XOR), !(NOT), << shift left, >> shift right
// Relational/Comparison Operators ==(Equality) ,> (Greater), <(Less), !=, >=, <=
// Logical/Compound Operators &&(Logical AND), || (Logical OR), !(Logical NOT)
// Ternary Operators

// Selections Statements ----> if/else, switch

int main()
{
    // int x = 10;


    // if (x >= 10 && x <= 15)
    // {
    //     cout << "success" << endl;
    // }
    // else
    // {
    //     // else is known is default case
    //     cout << "Failed";
    // }

    int z = 5;

    cout << endl;

    int y = (z == 5) ? 10 : 1;

    cout << y;

    int a;

    cout << "Enter Option" << endl;
    cin >> a;

    switch (a)
    {

    case 0:
        cout << "Zero" << endl;
        break; // Jump Statement

    case 1:
        cout << "One" << endl;
        break;

    default:
        cout << "Default Case" << endl;
        break;
    }

    return 0;
}
