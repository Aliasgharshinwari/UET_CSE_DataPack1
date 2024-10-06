#include <iostream>

using namespace std;

main()
{
    system("cls");
    int num1;
    int num2;
    int num3;

    cout << "Enter the value of num1..";
    cin >> num1;
    cout << "Enter the value of num2..";
    cin >> num2;
    cout << "Enter the value of num3..";
    cin >> num3;

    cout << "The Forward order is: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The Reverse order is: " << num3 << "," << num2 << "," << num1 << endl;
    system("pause");
}