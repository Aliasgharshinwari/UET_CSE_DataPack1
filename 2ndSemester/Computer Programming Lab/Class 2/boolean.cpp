#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    int result;

    system("cls");

    cout << "Enter values of a..";
    cin >> a;
    cout << "Enter values of b..";
    cin >> b;

    result = a & b;
    cout << "Result is " << result << endl;
    system("pause");
    return 0;
}
