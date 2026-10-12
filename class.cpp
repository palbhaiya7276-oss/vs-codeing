#include <iostream>
using namespace std;

class shape {
public:
    virtual void calculateArea() = 0;
};

class rectangle : public shape {
public:
    void calculateArea() override {
        int length = 20, breadth = 30;
        int area = length * breadth;

        cout << "Area of rectangle is: " << area << endl;
    }
};

int main() {
    rectangle r;
    r.calculateArea();

    return 0;
}