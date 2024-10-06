#include <iostream>
using namespace std;

main()
{
    system("cls");

    int x, y, z, result;

    cout << "Enter num1: ";
    cin >> x;
    cout << "Enter num2: ";
    cin >> y;
    cout << "Enter num3: ";
    cin >> z;
    result = x * y * z;

    cout << "Product is: " << result << endl;

    system("pause");
}
