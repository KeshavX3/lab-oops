#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    int * arrptr = new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Value : ";
        cin>>arrptr[i];
    }
    for (size_t i = 0; i <n; i++)
    {
        cout<<"array = "<<"["<<arrptr[i]<<"]"<<endl;
    }
    float sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum += arrptr[i];
    }
    float average = sum/n;
    cout<<"Average =:"<<average <<endl;
    return 0;


    


}
