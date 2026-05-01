// Access Modifiers in C++
//1.Public Modufier
#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        void introduce(){
            cout<<"Mu name is "<<name<<" and I am "<<age<<"years old."<<endl;
        }
};
int main(){
    Student student1;
    student1.name="Alice";
    student1.age=20;
    student1.introduce();
    return 0;   
}

//2.Private Modifier

class BankAccount{
    private:
        double balance;
    public:
        void setBalance(double amount){
            balance=amount;
        }
        double getBalance(){
            return balance;
        }
};
int main(){
    BankAccount account;
    account.setBalance(1000.50);
    cout<<"Balance:"<<account.getBalance()<<endl;
    return 0;
}

//3.Protected Modifier

class Parent{
    protected:
        int age=50;
};
class Child:public Parent{
    public:
        void displayAge(){
            cout<<"Age of parent is:"<<age<<endl;
        }
};
int main(){
    Child child;
    child.displayAge();  //50
    // child.age; // Error: 'age' is protected within this context
    return 0;
}

