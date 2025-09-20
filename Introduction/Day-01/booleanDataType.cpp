#include<iostream>
using namespace std;
int main()
{
    // boolean stores only two values: true or false
    // true is represented by 1 and false is represented by 0


    bool flag = 43;
    cout<<flag<<endl; // Output: 1 (true)
    flag = 0;
    cout<<flag<<endl; // Output: 0 (false)
    flag = -23;
    cout<<flag<<endl; // Output: 1 (true)
    flag = 0.00001;
    cout<<flag<<endl; // Output: 1 (true)
    flag = 0.1;
    cout<<flag<<endl; // Output: 1 (true)

    cout<<(7>6)<<endl; // Output: 1 (true)
    cout<<(7<6)<<endl; // Output: 0 (false)

    int x = 4;
    int y = 6;

    cout<<(x==y)<<endl; // Output: 0 (false)
    cout<<(x!=y)<<endl; // Output: 1 (true)
}