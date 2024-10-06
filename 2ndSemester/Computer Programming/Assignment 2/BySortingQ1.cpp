#include <iostream>

using namespace std;

main()
{
    int sizeVar = 5; //size of array. Set to 4 by default
    int cacheVar = 0;   //cache variable used in swapping

    cout<<"Enter the size of array: "<<endl;
    cin>>sizeVar;

    int numbers[sizeVar]; //Declaring array with variable size

    //Looping through array for getting values from user
    for (int i = 0; i < sizeVar; i++){
        cout << "Enter value of element "<<i<< " of numbers array " << endl;
        cin >> numbers[i];
    }

    //Extra Space
    cout<<"\n";

    //Sorting process begins after this. Bubble Sort Technique is used in here.
    for (int i = 0; i < sizeVar; i++){

        for (int j = i + 1; j < sizeVar; j++){

            if (numbers[i] < numbers[j] ){
            cacheVar = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = cacheVar;
            }
        }
    }

    cout<<"Largest element is ="<<numbers[0]<<endl; //Largest element is the first element of numbers array
}
