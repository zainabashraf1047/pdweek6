#include<iostream>
using namespace std;
main()
{
   int height;
   int x,y;
   cout<<"Enter height : ";
   cin>>height;
   cout<<"Enter x coordinate : ";
   cin>>x;
   cout<<"Enter y coordinate : ";
   cin >>y;
   if((x>=0 && x<=3*height) && (y==0))
   {
    cout<<"Border";
   }
   else if((x>=0 && x<=height)&& (y==height))
   {
    cout <<"Border";

   }
      else if((x>=2*height && x<=3*height)&& (y==height))
   {
    cout <<"Border";
    
   }
   else if(x==height &&(y>=height && y<=4*height))
   {
    cout<<"Border";
   }
   else if(x==2*height &&(y>=height && y<=4*height))
   {
    cout<<"Border";
   } 
      else if(x==0 &&(y>=0 && y<=height))
   {
    cout<<"Border";
   }
      else if(x==3*height &&(y>=0 && y<=height))
   {
    cout<<"Border";
   }
      else if(x>=height && x<=2*height && y==4*height)
   {
    cout<<"Border";
   }
      else if((x<0 || x>3 *height))
   {
    cout<<"Outside";
   }

         else if((x<height) && (y>height))
   {
    cout<<"Outside";
   }
         else if((x>2*height)&& (y>height))
   {
    cout<<"Outside";
   }
         else if(y<0 || y>4*height)
   {
    cout<<"Outside";
   }
   else
   {
    cout<<"inside";
   }
}
