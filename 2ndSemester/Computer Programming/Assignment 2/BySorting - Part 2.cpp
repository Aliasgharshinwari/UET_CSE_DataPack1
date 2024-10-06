#include <iostream>
using namespace std;

main()
{
    int stackValue = 0;

    int values[5] = {3,24,23,21,4};

    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if (values[i] < values[j] ){
            stackValue = values[i];
            values[i] = values[j];
            values[j] = stackValue;
            }
        }
    }

    cout<<"Largest element of array is "<<values[0];
    cout<<"\nSecond smallest element of array is "<<values[3];
}
