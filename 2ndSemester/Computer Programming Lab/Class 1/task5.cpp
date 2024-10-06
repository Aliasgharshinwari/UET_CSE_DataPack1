
#include <iostream>
using namespace std;

main()
{
     system("cls");
    float radius, area;
    const float pi = 3.14;

    cout << "Enter radius of circle: ";
    cin >> radius;
    area = pi * radius* radius;

    cout << "Area of circle is: "<<area<<endl;
    system("pause");
}
