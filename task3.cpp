#include<iostream>
using namespace std;
string zodiacsign(int day , string month);
main()
{
    string month;
    int day;
    string result;
  cout<<"Enter month : ";
  cin>>month;
  cout<<"Enter day : ";
  cin>>day;
    result = zodiacsign(day,month);
  cout<<"Your sign is : "<<result; 
}
string zodiacsign(int day , string month)
{
    string result;
    if(day>=21 && month=="march")
    {
        result = "Aries";
    }
    if(day<=19 && month=="april")
    {
        result = "Aries";
    }
    // .....
     if(day>=20 && month=="april")
    {
        result = "Taurus";
    }
    if(day<=20 && month=="may")
    {
        result = "Taurus";
    }
    // .....
    if(day>=21 && month=="may")
    {
        result = "Gemini";
    }
    if(day<=20 && month=="june")
    {
        result = "Gemini";
    }
    // .....
     if(day>=21 && month=="june")
    {
        result = "Cancer";
    }
     if(day<=22 && month=="july")
    {
        result = "Cancer";
    }
    // .....
        // .....
     if(day>=23 && month=="july")
    {
        result = "Leo";
    }
     if(day<=22 && month=="august")
    {
        result = "Leo";
    }
    // .....

        // .....
     if(day>=23 && month=="august")
    {
        result = "virgo";
    }
     if(day<=22 && month=="september")
    {
        result = "virgo";
    }
    // .....

        // .....
     if(day>=23 && month=="september")
    {
        result = "Libra";
    }
     if(day<=22 && month=="october")
    {
        result = "Libra";
    }
    // .....

        // .....
    if(day>=23 && month=="october")
    {
        result = "Scorpio";
    }
     if(day<=21 && month=="november")
    {
        result = "Scorpio";
    }
    // .....

        // .....
    if(day>=22 && month == "november")
    {
        result = "Sagittarius";
    }
    if(day<=21 && month == "december")
    {
        result = "Sagittarius";
    }
    // .....

    if(day>=22 && month == "december")
    {
        result = "Capricon";
    }
     if(day<=19 && month == "january")
    {
        result = "Capricon";
    }
    // .....

    if(day>=20 && month == "january")
    {
        result = "Aquaris";
    }
    if(day<=18 && month == "february")
    {
        result = "Aquaris";
    }
    // .....
    if(day>=19 && month == "february")
    {
        result = "Pisces";
    }
     if(day<=20 && month == "march")
    {
        result = "Pisces";
    }
    // .....
    return result;
}