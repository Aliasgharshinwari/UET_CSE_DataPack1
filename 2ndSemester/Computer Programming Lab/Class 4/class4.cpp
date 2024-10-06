#include<iostream>

using namespace std;

//iterations statements

main()
{
    int x = 0;
    int y = 0;

    //while( x != 0){
   // cout<<(x)<<endl;
   // y += 1;
   // x--;
  //  }

    //do{
    //    cout<<"This is a do while"<<endl;
    //    y++;
    //}

    //while(y < 5);

//    cout<<"Y value is "<<y;

//        for(int i = 1; i <= 5; i++){
//        if(i == 2)
            //break;    //Terminate Loop
            //continue; //skip for i = 2;
//            return 0;   //terminate whole function


//        cout<<"Loop "<<i<<endl;
//        }

//        cout<<"Finish";


    cout<<"Enter x: ";
    cin>>x;

    test:
    if(x != 0){
        cout<<"This is a goto loop"<<endl;
        x--;
        goto test;
    }

}
