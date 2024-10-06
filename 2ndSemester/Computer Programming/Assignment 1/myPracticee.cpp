#include <iostream>
using namespace std;
int main()
{
    for(int i = 1, j = 1;
    i*i > 0 && i*i < 100, j*j > 0 && j*j < 100;
     i++,j++){

        cout<<i<<" "<<j<<endl;
    }
    return 0;
}
