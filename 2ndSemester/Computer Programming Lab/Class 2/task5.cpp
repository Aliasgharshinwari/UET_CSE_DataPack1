#include <iostream>

using namespace std;

int main()
{

    int A, B, C;

    system("cls");
    cout << "Enter Value of A: ";
    cin >> A;

    cout << "Enter Value of B: ";
    cin >> B;

    // Before Swapping Process
    cout << "Before Swapping" << endl;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    // After Swapping Process

    cout << "After Swapping with the help of third variable" << endl;

    C = A;
    A = B;
    B = C;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    cout << "After Swapping Without Third Variable" << endl;

    A = A + B;//5 = 5 + 4 = 9
    B = A - B;//4 = 9 - 4 = 5 
    A = A - B;//   9 - 5

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    system("pause");
    return 0;
}