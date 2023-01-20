#include<iostream>
using namespace std;

int calculatecharges(char serviceCode,int minutes,char time);
main()
{
  char serviceCode;
  int minutes, charges;
  char time;
  cout<<"Enter service code : ";
  cin>>serviceCode;
  cout<<"Enter minutes : ";
  cin>>minutes;
  cout<<"Enter time : ";
  cin>>time;
  charges= calculatecharges(serviceCode,minutes,time);
  cout<<charges;
}
int calculatecharges(char serviceCode,int minutes,char time)
{
    int charges;
  if((serviceCode=='R'|| serviceCode=='r') && minutes<=50)
  {
    charges= 10;
  }
  else if((serviceCode=='R'|| serviceCode=='r') && minutes>50)
  {
    charges= (minutes*0.20)+10;
  }


  else if((serviceCode=='p'|| serviceCode=='P')&& minutes<=75 && (time=='D'|| time=='d'))
  {
    charges=25;

  }
   else if((serviceCode=='p'|| serviceCode=='P')&& minutes>75 && (time=='D'||time=='d'))
  {
    charges=25+(minutes*0.10);
    
  }

    else if((serviceCode=='p'|| serviceCode=='P')&& minutes<=100 && (time=='N'||time =='n'))
  {
    charges=25;

  }
   else if((serviceCode=='p'|| serviceCode=='P')&& minutes>100 && (time=='n'||time=='N'))
  {
    charges=25+(minutes*0.05);
    
  }
  return charges;
}