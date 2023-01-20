#include<iostream>
using namespace std;
float apartment(int noofday,string month);
float studio(int noofday,string month);
main()
{
   string month;
   int noofday;
   float price;
   cout<<"Enter month : ";
   cin>>month;
   cout<<"Enter no of days : ";
   cin>>noofday;
   price=apartment(noofday,month);
   cout<<price;
   price=studio(noofday,month);
   cout<<price;
}
float apartment(int noofday,string month)
{
    float price;
    if((month=="may"|| month=="october") && noofday<=7)
    {
       price=65*noofday;
    }


        if((month=="june"|| month=="september") && noofday<=14)
    {
       price=68.70*noofday;
    } 



        if((month=="july"|| month=="august") && noofday<=14)
    {
       price=77*noofday;
    } 
    if( (month=="may"||month=="october"||month=="june"||month=="september"||month=="july" ||month=="august") && noofday>14)
     {
        price=price-(price*0.1);
     }
     return price;
}


float studio(int noofday,string month)
{
    float price;

    if((month=="may"|| month=="october") && noofday<=7)
    {
       price=50*noofday;

    } 
        if((month=="may"|| month=="october") && (noofday>7||noofday<=14))
    {
       price=50*noofday;
    price=price-(price*0.05);

    } 
            if((month=="may"|| month=="october") && noofday>14)
    {
       price=50*noofday;
    price=price-(price*0.3);

    } 




    if((month=="june"|| month=="september") && noofday<=14)
    {
       price=75.20*noofday;
    } 

        if((month=="june"|| month=="september") && noofday>14)
    {
       price=75.20*noofday;
       price=price-(price*0.2);
    } 


    if((month=="july"|| month=="august") && noofday<=14)
    {
       price=76*noofday;
    } 
    return price;
}

