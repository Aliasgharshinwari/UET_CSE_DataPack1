#include<iostream>
using namespace std;
#include <cctype>

 int main()
 {
 const int SEATS = 11;
 int plane[ SEATS ] = { 0 }, people = 0, economy = 1, firstClass = 6,
 choice;
 char response;

 while ( people < 10 ) {
 cout << "\nPlease type 1 for \"firstClass\"\n"
 << "Please type 2 for \"economy\"\n";
 cin >> choice;

 if ( choice == 1 ) {
 if ( !plane[ firstClass ] && firstClass <= 10 ) {
 cout << "Your seat assignment is " << firstClass << ' ';
 plane[ firstClass++ ] = 1;
 ++people;
 }
 else if ( firstClass > 10 && economy <= 5 ) {
 cout << "The firstClass section is full.\n"
 << "Would you like to sit in the economy"
 << " section (Y or N)? ";
 cin >> response;

 if ( toupper( response ) == 'Y' ) {
 cout << "Your seat assignment is " << economy << ' ';
 plane[ economy++ ] = 1;
 ++people;
 }
 else
 cout << "Next flight leaves in 3 hours.\n";
 }
 else
 cout << "Next flight leaves in 3 hours.\n";
 }
 else {
 if ( !plane[ economy ] && economy <= 5 ) {
 cout << "Your seat assignment is " << economy << '\n';
 plane[ economy++ ] = 1;
 ++people;
 }
 else if ( economy > 5 && firstClass <= 10 ) {
 cout << "The economy section is full.\n"
 << "Would you like to sit in the firstClass"
 << " section (Y or N)? ";
 cin >> response;

 if ( toupper( response ) == 'Y' ) {
 cout << "Your seat assignment is " << firstClass << '\n';
 plane[ firstClass++ ] = 1;
 ++people;
 }
 else
 cout << "Next flight leaves in 3 hours.\n";
 }
 else
 cout << "Next flight leaves in 3 hours.\n";
 }
 }

 cout << "All seats for this flight are sold." << endl;

 return 0;
}
