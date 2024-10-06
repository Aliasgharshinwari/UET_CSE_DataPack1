#include <iostream>
using namespace std;

main()
{
    //declaring variable
    int values = 0;

    //declaring array and initializing values to array
    int arr[5] = {3,24,23,5,4};

    //nested loop for sorting array from highest value to lowest value
    for (int i = 0; i < 5; i++){
        for (int k = i + 1; k < 5; k++){
            if (arr[i] < arr[k])
            {
            values = arr[i];
            arr[i] = arr[k];
            arr[k] = values;
            }
        }
    }

    cout<<"Largest element of array is "<<arr[0];
    cout<<"\nSecond smallest element of array is "<<arr[3];
}
