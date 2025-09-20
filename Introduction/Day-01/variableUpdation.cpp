#include<iostream>
using namespace std;   
// Variable updation
int main(){
    int x;
    cout<<x<<endl; // garbage value
    x = 43*4;
    cout<<x<<endl;
    cout<<"**********************************"<<endl;

    int y = 3;
    cout<<y<<endl;
    y -=5;
    cout<<y<<endl;

    
    cout<<"**********************************"<<endl;

    int a = 3;
    cout<<a<<endl;
    a +=5;
    cout<<a<<endl;

    cout<<"**********************************"<<endl;

    int b = 3;
    cout<<b<<endl;
    b *=5;
    cout<<b<<endl;
}