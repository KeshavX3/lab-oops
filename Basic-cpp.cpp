#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void getdata(){
        cout<<"Enter a Number :";
        cin>>a;
        display();
    }
    void display(){
        cout<<"Value of a : "<<a<<endl;
    }
};
int main(){
    A b;
    b.getdata();
    return 0;
}