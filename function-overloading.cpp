#include<iostream>

using namespace std;
class Area{
    private:
    int a;
    float b;
    public:
    void getArea(int x){
        a = x * x;
        cout<<"Area of square is "<<a<<endl;

    }
    void getArea(int l,int w){
        a = l * w;
        cout<<"Area of rectangle is "<<a<<endl;
    }
    float getArea(float l , float w, float h){
        b = l * w * h;
        cout<<"Area of cube is "<<b<<endl;
    }
    void getArea(double r){
        b = 3.14 * r * r;
        cout<<"Area of circle is "<<b<<endl;
    }
};

int main(){
    Area c;
    c.getArea(5.5);
    return 0;
}