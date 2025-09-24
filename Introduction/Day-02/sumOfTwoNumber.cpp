#include<iostream>
using namespace std;

// some of two number
int main(){
    // int a, b;
    // cout<<"Enter first number: ";
    // cin>>a;
    // cout<<"Enter second number: ";
    // cin>>b;
    // cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
    // return 0;

    // predict the output
    int x = 10;
    cout<<x++ + ++x<<endl; // 10 + 12 = 22
    cout<<x<<endl;

    // predict the output
    int y = 5;
    cout<<y++ + ++y<<endl; // 5 + 7 = 12
    cout<<y;
    
    // different predict the output
    int a = 3;
    cout<<++a + a++ + ++a + a++<<endl; 
    cout<<a<<endl  ; 

    // different predict the output
    int b = 4;
    cout<<b++ + ++b + b++ + ++b<<endl; 
    cout<<b<<endl  ; // 

    int b = 4;
    int result = b++;
    result += ++b;
    result += b++;
    result += ++b;
    cout << result << endl;
    cout << b << endl;

    // more different predict the output and complex
    int p = 2;
    int q = 3;
    int r = 4;
    int result = p++ + ++p * q++ + r++ + ++r * q++;
    cout<<result<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;

    // today learnig my basic concept
    
}