#include<iostream>
using namespace std;
string claculategrade(string name , int subj1 , int subj2, int subj3, int subj4,int subj5);
main()

{
    string name;
    int subj1;
    int subj2;
    int subj3;
    int subj4;
    int subj5;
    cout<<"Enter marks of 1st subject :";
    cin>>subj1;
       cout<<"Enter marks of 2nd subject :";
    cin>>subj2;
        cout<<"Enter marks of 3rd subject :";
    cin>>subj3;
        cout<<"Enter marks of 4th subject :";
    cin>>subj4;
        cout<<"Enter marks of 5th subject :";
    cin>>subj5; 
    string result= claculategrade(name,subj1,subj2,subj3,subj4,subj5);
    cout<<"Grade is : "<<result <<endl;

}
string claculategrade(string name , int subj1, int subj2, int subj3 , int subj4,int subj5)
{
    float percentage=((subj1+subj2+subj3+subj4+ subj5)*100)/500;
    string result;
    if(percentage>=90 && percentage<100)
    {
        result="A+";
    }
        if(percentage>=80 && percentage<90)
    {
        result="A ";
    }
        if(percentage>=70 && percentage<80)
    {
        result="B+";
    }
        if(percentage>=60 && percentage<70)
    {
        result="B ";
    }
        if(percentage>=50 && percentage<60)
    {
        result="C ";
    }
        if(percentage>=40 && percentage<50)
    {
        result="D ";
    }
        if(percentage<40)
    {
        result="F ";
    }
    return result;
}
