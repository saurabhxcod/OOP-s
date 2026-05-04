#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0; // pure virtual function
    void info(){
        cout<<"This is a shape."<<endl;
    }
};

class Circle:public Shape{
    public:
    void draw() override{
        cout<<"Drawing a circle."<<endl;
    }
};

class Square:public Shape{
    public:
    void draw() override{
        cout<<"Drawing a square."<<endl;
    }
};

int main(){
    Circle c;
    Square s;
    c.info();
    c.draw();
    s.info();
    s.draw();
    return 0;
}