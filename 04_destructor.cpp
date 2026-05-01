#include<iostream>
using namespace std;

// class Student{
//     public:
//     string name;
//     int age;
//     Student(){
//         name="Saurabh";
//         age=21;
//         cout<<"Constructor called"<<endl;
//     }
//     ~Student(){
//         cout<<"Destructor called"<<endl;
//     }
// };
// int main(){
//     Student s1;
//     cout<<"Name: "<<s1.name<<endl;
//     cout<<"Age: "<<s1.age<<endl;  
//     return 0;
// }


//Constructor Overloading
class Student{
    public:
    string name;
    int age;
    Student(){
        name="Saurabh";
        age=21; 
        cout<<"Default Constructor called"<<endl;
    }
    Student(string n, int a){
        name=n;
        age=a;
        cout<<"Parameterized Constructor called"<<endl;
    }
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Student s1;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;  
    Student s2("Rahul", 22);
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;  
    return 0;
}