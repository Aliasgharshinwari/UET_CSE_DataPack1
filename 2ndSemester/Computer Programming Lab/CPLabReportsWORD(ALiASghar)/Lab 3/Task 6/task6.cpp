#include<iostream>
using namespace std;

main(){
    char c;

    cout<<"Enter character ";
    cin>>c;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' ||
       c == 'u' ||  c == 'A' || c == 'E' || c == 'I' ||
       c == 'O' || c == 'U' )
        cout<<"Vowel";

    else
        cout<<"Consonant";
}
