#include <iostream>
using namespace std;

main(){
    int a, b, c, d, e;
    float numerator, denominator, result;

    cout << "Enter values of a..";
    cin >> a;
    cout << "Enter values of b..";
    cin >> b;
    cout << "Enter values of c..";
    cin >> c;
    cout << "Enter values of d..";
    cin >> d;
    cout << "Enter values of e..";
    cin >> e;

    numerator = ((a * a * a) + b - d / b);
    denominator = a * (b + c * (e + a) / b) - 5;

    result = numerator / denominator;

    cout << "Result is " << result << endl;
}
