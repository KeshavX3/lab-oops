#include<iostream>
using namespace std;
class constructor {
    int a, b;
    public:
    constructor(int i){
        a = b = i;
        cout<<"1 argument constructor"<<"\n";
    }
    constructor(int i, int j){
        a = i;
        b = j;
        cout<<"2 argument constructor called "<<endl;
    }
    constructor(constructor &obj){
        this -> a = obj.a;
        this -> b = obj.b;
        cout<<"Copy constructor called "<<endl;
    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"a+b = "<<(a+b)<<endl;
    }
    ~constructor(){
        cout<<"Destructor  is called "<<endl;
    }
};

int main(){
    int x,y;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    constructor c1(4);
    c1.show();
    constructor c2(c1);
    c2.show();
    return 0;
}
