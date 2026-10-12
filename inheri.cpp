#include<iostream>
using namespace std;
class vehicle{
    public:
    string brand = "BMW M4";
    void hunk(){
        cout<<"hello vehicle";
    }
};
class car{
    public:
    string model="M5";
};
int main(){
car c;
vehicle v;
return 0; 
}