#include<iostream>
using namespace std;
string activity(string temp , string humidity);
main()
{
    string temp;
    string humidity;
    string result;
  cout<<"Enter today's temperature : ";
  cin>>temp;
  cout<<"Enter humidity : ";
  cin >>humidity;
  result = activity(temp , humidity);
  cout<<"You should  "<<result <<endl;

}
string activity(string temp , string humidity)
{

string result;
    if(temp =="warm" && humidity=="dry")
    {
        result= "Play tennis";
    }
      else  if(temp =="warm" && humidity=="humid")
    {
        result= "Swim";
    }
      else  if(temp =="cold" && humidity=="dry")
    {
        result= "Play basketball";
    }
       else if(temp =="cold" && humidity=="humid")
    {
        result= "Watch TV";
    }
    return result;
}