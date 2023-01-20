#include<iostream>
using namespace std;

main()
{

  int starthours;
  int startminutes;
  int arrivalhours;
  int arrivalminutes;
  cout<<"Enter starting time in hours: ";
  cin>>starthours;
  cout<<"Enter starting time in minutes : ";
  cin>>startminutes;
  cout<<"Enter arrival time in hours : ";
  cin>>arrivalhours;
  cout<<"Enter arrival time in minutes : ";
  cin>>arrivalminutes;

  int start=starthours*60 +startminutes;
  int arrival=arrivalhours*60+arrivalminutes;
  if(start<arrival)
  {
    cout<<"Late ";
   int resultinhours = (start-arrival)*(-1);
    resultinhours = resultinhours/60;
    int resultinmins=resultinhours%60;
    cout<<resultinhours <<" "<<resultinmins;

    
  }
  if(start>arrival)
  {
    cout<<"Early";
    int resultinhours = (arrival-start)*(-1);
    resultinhours = resultinhours/60;
    int resultinmins=resultinhours%60;
        cout<<resultinhours <<" "<<resultinmins;
    
  }
  if(start==arrival)
  {
    cout<<"On Time ";
  
  }


}
