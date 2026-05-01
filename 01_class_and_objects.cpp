#include<iostream>
using namespace std;
class Car{
public:
    string brand;
    int speed;
    void drive(){
        cout<<"Driving "<<brand<<"at"<<speed<<"km/h"<<endl;
    }
};

int main(){
    Car car1;
    car1.brand="Toyato";
    car1.speed=100;
    car1.drive();
    return 0;
}