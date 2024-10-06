#include <iostream>
using namespace std;

main()
{
    int id,surcharge_amount, unit_consumed,net_amount;
    int charged_amount = 100;
    float charge_per_unit;

    cout << "Enter Customer ID";
    cin >> id;
    cout << "Enter the Units Consumed";
    cin >> unit_consumed;

    if (unit_consumed < 200){
        charge_per_unit = 1.2;
        charged_amount = unit_consumed * charge_per_unit;
    }

    else if (unit_consumed > 200 && unit_consumed < 400){
        charge_per_unit = 1.5;
        charged_amount = unit_consumed * charge_per_unit;
    }

    else if (unit_consumed > 400 && unit_consumed < 600){
        charge_per_unit = 1.8;
        charged_amount = unit_consumed * charge_per_unit;
    }

    else if (unit_consumed > 600){
        charge_per_unit = 2;
        charged_amount = unit_consumed * charge_per_unit;
    }

    if (charged_amount > 400)
        surcharge_amount = charged_amount * 0.15;
    else
        surcharge_amount = 0;

    net_amount = surcharge_amount + charged_amount;

    cout<<"Customer ID no. is = "<<id<<endl;
    cout<<"Units Consumed is = "<<unit_consumed<<endl;
    cout<<"Charged Amount is @"<<charge_per_unit<<" = "<<charged_amount<<endl;
    cout<<"Sur charged Amount is = "<<surcharge_amount<<endl;
    cout<<"Net Amount paid is = "<<net_amount<<endl;
    }
