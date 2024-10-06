#include<iostream>

using namespace std;

main(){

    int personNo = 0;
    int beverageNo;
    int coffeeVotes = 0;
    int teaVotes = 0;
    int cokeVotes = 0;
    int orangeVotes = 0;
    while(1){
    label:
    cout<<"Please enter the favourite beverage of person #"<<personNo<<" : Choose 1 ,2 3,or 4 from the above or -1 to exit the program";
    cin>>beverageNo;

    if(beverageNo == 1)
{
    coffeeVotes++;
}
    else if(beverageNo == 2){
      teaVotes++;
    }
        else if(beverageNo == 3){
            cokeVotes++;
            }
            else if(beverageNo == 4){
            orangeVotes++;
            }
                else if(beverageNo == -1){
                    break;
                }
    else
        {
                cout<<"Please enter a valid number"<<endl;
                goto label;
    }
    personNo++;
    }

    cout<<endl;
    cout<<"Total number of persons voted = "<<personNo<<endl;
    cout<<endl;

    cout<<"Beverage   \t"<<"Number of votes"<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Coffee      \t"<<coffeeVotes<<endl;
    cout<<"Tea         \t"<<teaVotes<<endl;
    cout<<"Coke        \t"<<cokeVotes<<endl;
    cout<<"Orange Juice\t"<<orangeVotes<<endl;

}
