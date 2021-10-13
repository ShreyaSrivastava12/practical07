#include<iostream>
using namespace std;
int main()
{
     int c;
     cout<<"Enter your choice: "<<endl;
     cin>>c;
     switch(c){
     case 1:
     cout<<"Year is 2021..."<<endl;
     break;
     case 2:
     cout<<"Month is OCTOBER..."<<endl;
     break;
     case 3:
     cout<<"Date is 13/10/2021..."<<endl;
     break;
     case 4:
     cout<<"Time is 9:37a.m. ..."<<endl;
     break;
     default:
     cout<<"INVALID CHOICE..."<<endl;
     break;
     }
     return 0;
}
