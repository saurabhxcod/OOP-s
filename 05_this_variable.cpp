#include<iostream>
using namespace std;
class Student{
    string name;
    public:
    Student(string name){
        this->name=name;

    }
    void display(){
        cout<<"Name:"<<name<<endl;
    }
};
int main(){
    Student s("Alice");
    s.display();
    return 0;   
}