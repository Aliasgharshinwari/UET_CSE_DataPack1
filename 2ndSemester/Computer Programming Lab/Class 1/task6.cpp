#include <iostream>

using namespace std;

main()
{
    system("cls");
    float major, minor, area;
    const float pi = 3.14;

    cout << "Enter major axes of ellipse: ";
    cin >> major;

    cout << "Enter minor axes of ellipse: ";
    cin >> minor;

    area = pi * major * minor;

    cout << "Area of ellipse is: " << area <<endl;

    system("pause");
}
