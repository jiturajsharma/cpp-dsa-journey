#include<iostream>
using namespace std;

int main(){
    // Take two integers a and b ; a>b, and find the reaminder when a is divided by b.

    int a = 16;  // a means divident
    int  b = 3;  // b is divisor
    // int q = a/b;  // q is quotient
    // int r; // r is remainder

    // // a = (b*q) + r
    // r = a - (b*q);
    // cout<<r;


    int r = a % b; // remainde when is divided then find remainder easily
    cout<<r;
}