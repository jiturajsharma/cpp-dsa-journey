#include <iostream>
using namespace std;

int main(){
    // take interger as input and print half of the number
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<"Half of "<<num<<" is "<<num/2.0; // using 2.0 to ensure floating-point division
    return 0;

}