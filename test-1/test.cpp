#include<iostream>
using namespace std;
class vehicle{
    protected:
    string vehiclenumber;
    string wonername;
    int hours;
    protected 
    vehicle(string v, string o, int h){
        vehiclenumber v;
        wonername o;
        hours h;
    }
    void showdetails(){
        cout<<"mall parking billing system"<<endl;
        cout<<"vehiclenumber:"<<vehiclenumber<<endl;
        cout<<"wonername:"<<wonername<<endl;
        cout<<"hours:"<<hours<<endl;
    }


return 0; 
}