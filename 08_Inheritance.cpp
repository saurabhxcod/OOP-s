#include<iostream>
using namespace std;
//Single Inheritance

class Employee{
    public:
    string name;
    int id;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};

class Developer:public Employee{
    public:
    void makeApp(){
        cout<<"Making an app..."<<endl;
    }
};
// int main(){
//     Developer dev;
//     dev.name="John Doe";
//     dev.id=12345;
//     dev.display();
//     dev.makeApp();
//     return 0;
// }

//Multiple Inheritance
class Engine{
    public:
    void start(){
        cout<<"Engine started..."<<endl;
    }
};

class GPS{
    public:
    void navigate(){
        cout<<"Navigating..."<<endl;
    }
};
// // class Car:public Engine, public GPS{
//     public:
//     void drive(){
//         cout<<"Driving..."<<endl;
//     }
// };
// int main(){
//     Car c;
//     c.start();
//     c.navigate();
//     c.drive();
//     return 0;
// }


//Mutilevel Inheritance

class Person{
    public:
    string name;
    int roll;
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
    }
};
class Student:public Person{
    public:
    void study(){
        cout<<"Studying..."<<endl;
    }
};

class Graduate:public Student{
    public:
    void research(){
        cout<<"Researching..."<<endl;
    }
};

// int main(){
//     Graduate grad;
//     grad.name="Alice";
//     grad.roll=101;
//     grad.display();
//     grad.study();
//     grad.research();
//     return 0;
// }


//Hierarchical Inheritance

class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class Cat:public Animal{
    public:
    void meow(){
        cout<<"Meowing..."<<endl;
    }
};

// int main(){
//     Dog d;
//     d.eat();
//     d.bark();
//     Cat c;
//     c.eat();
//     c.meow();
//     return 0;
// }


//Hybrid Inheritance


// class Vehicle{
//     public:
//     void move(){
//         cout<<"Moving..."<<endl;
//     }
// };

// class Car:public Vehicle{
//     public:
//     void drive(){
//         cout<<"Driving..."<<endl;
//     }
// };

// class Bike:public Vehicle{
//     public:
//     void ride(){
//         cout<<"Riding..."<<endl;
//     }
// };

// class Transport:public Car, public Bike{
//     public:
//     void transport(){
//         cout<<"Transporting..."<<endl;
//     }
// };

// int main(){
//     Transport t;
//     // t.move(); // Ambiguity error due to multiple inheritance
//     t.drive();
//     t.ride();
//     t.transport();
//     return 0;
// }


// Ambiguity error due to multiple inheritance - Solution Virtual Inheritance


class Vehicle{
    public:
    void move(){
        cout<<"Moving..."<<endl;
    }
};

class Car:virtual public Vehicle{
    public:
    void drive(){
        cout<<"Driving..."<<endl;
    }
};

class Bike:virtual public Vehicle{
    public:
    void ride(){
        cout<<"Riding..."<<endl;
    }
};

class Transport:public Car, public Bike{
    public:
    void transport(){
        cout<<"Transporting..."<<endl;
    }
};

int main(){
    Transport t;
    t.move(); // Ambiguity error due to multiple inheritance resolved by virtual inheritance
    t.drive();
    t.ride();
    t.transport();
    return 0;
}
