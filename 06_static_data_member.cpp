#include<iostream>
using namespace std;

class Student{
    public:
    static int count;
    Student(){
        count++;
    }
    static void displayCount(){
        cout<<"Count: "<<count<<endl;
    }
};
int Student::count=0;
int main(){
    Student s1;
    Student s2;
    Student s3;
    Student::displayCount();
    return 0;
}