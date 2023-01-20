#include<iostream>
using namespace std;
float calculatePrice(string fruit , string day, int numberofFruits);
main()
{
    string fruit;
    string day;
    int numberofFruits;
  cout<<"Enter name of fruit : ";
  cin>>fruit;
  cout<<"Enter day : ";
  cin>>day;
  cout<<"Enter number of fruits : ";
  cin>>numberofFruits;
  float price;
  price=calculatePrice(fruit , day,numberofFruits);
  cout<<price;
}
float calculatePrice(string fruit , string day, int numberofFruits)
{
    float price;
    if(fruit=="banana" && day!="sunday")
    {
      price=2.50*numberofFruits;
    }
        if(fruit=="banana" && day=="sunday")
    {
      price=2.70*numberofFruits;
    }
    //apple
        if(fruit=="apple" && day!="sunday")
    {
      price=1.20*numberofFruits;
    }
        if(fruit=="apple" && day=="sunday")
    {
      price=1.25*numberofFruits;
    }
    //orange
        if(fruit=="orange" && day!="sunday")
    {
      price=0.85*numberofFruits;
    }
        if(fruit=="orange" && day=="sunday")
    {
      price=0.90*numberofFruits;
    }
    //grapefruit
        if(fruit=="grapefruit" && day!="sunday")
    {
      price=1.45*numberofFruits;
    }
        if(fruit=="grapefruit" && day=="sunday")
    {
      price=1.60*numberofFruits;
    }
    //kiwi
    if(fruit=="kiwi" && day!="sunday")
    {
      price=2.70*numberofFruits;
    }
    if(fruit=="kiwi" && day=="sunday")
    {
      price=3.00*numberofFruits;
    }
    //pineapple
     if(fruit=="pineapple" && day!="sunday")
    {
      price=5.50*numberofFruits;
    }
    if(fruit=="pineapple" && day=="sunday")
    {
      price=5.60*numberofFruits;
    }
    //grapes
    if(fruit=="grapes" && day!="sunday")
    {
      price=3.85*numberofFruits;
    }
    if(fruit=="grapes" && day=="sunday")
    {
      price=4.20*numberofFruits;
    }
    return price;
}