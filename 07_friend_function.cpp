#include<iostream>
using namespace std;
class Box{
    private:
    int length;
    public:
    Box(int l){
        length=l;
    }
    friend void setLength(Box &b,int len);
};
void setLength(Box &b,int len){
    b.length=len;
    cout<<"Length set to: "<<b.length<<endl;
}
int main(){
    Box b1(10); 
    setLength(b1,20);
    return 0;
}