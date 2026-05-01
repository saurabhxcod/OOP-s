#include<iostream>
using namespace std;
//Default Constructor
// class Student{
//     public:
//     string name;
//     int age;
//     Student(){
//         name="Saurabh";
//         age=20;
//         cout<<"Constructor called"<<endl;
//     }
//     void display(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Age:"<<age<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.display();
//     return 0;
// }


//Parameterized constructor
// class Student{
//     public:
//     string name;
//     int age;
//     Student(string n,int a)
//     {
//         name=n;
//         age=a;
//         cout<<"Constructor called"<<endl;
//     }
//     void display(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Age:"<<age<<endl;
//     }
// };

// int main(){
//     Student s2("Saurabh",22);
//     s2.display();
//     return 0;
// }

//Copy Constructor
class Student{
    public:
    string name;
    int age;
    Student(string n,int a)
    {
        name=n;
        age=a;
        cout<<"Constructor called"<<endl;
    }
    Student(Student &s)
    {
        name=s.name;
        age=s.age;
        cout<<"Copy Constructor called"<<endl;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
    Student s3("Saurabh",22);
    Student s4(s3);
    s3.display();  //Copy constructor is called when we create an object using another object
    s4.display(); 
    return 0;
}   