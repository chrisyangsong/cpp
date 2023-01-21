#include <iostream>
using namespace std;

int main()
{
    // int x = 5;
    // int y = 2;

    // cout << x++ << endl; // print x, then x= x+1
    // cout << ++x << endl; // x = x + 1, then print x 
    // cout << y-- << endl; //print y, then y = y-1
    // cout << --y<< endl;
    // return 0;

    // int x = 5;
    // x += 3; // x = x+3, similar as - * / 
    // cout <<  "x += 3 is: " << x << endl;

    // % is Modulo Operation (Remainder after division)



    // https://www.runoob.com/cplusplus/cpp-operators.html

    
    int a = 5; // correct
    a &= 3 ;
    cout <<  "a &= 3 is: " << a << endl;

    // int a = 5; // error: ‘int a’ previously declared here    
    a = 5;
    a |= 3 ;
    cout <<  "a |= 3 is: " << a << endl;

    a = 5;
    a ^= 3 ;
    cout <<  "a ^= 3 is: " << a << endl;

    a = 5;
    a >> 3 ;
    cout <<  "a >> 3 is: " << a << endl;

    a = 5;
    a << 3 ;
    cout <<  "a << 3 is: " << a << endl;


    a = 5;
    a = ~a ;
    cout <<  "a = ~ a is: " << a << endl;


    /*
    // cout <<  "a &= 3 is: " << a &= 3 << endl;  // error
    // cout <<  "a &= 3 is: " << (a &= 3) << endl;  // correct
    // cout <<  "a + a is: " << a+a << endl;  // correct
    */


    int x = 5;
    int y = 2;

    cout << (x == y) << endl;
    cout << (x != y) << endl;
    cout << (x > y) << endl;
    cout << (x < y) << endl;
    cout << (x >= y) << endl;
    cout << (x <= y) << endl;
    

    cout << (true && false) << endl;
    cout << (true || false) << endl;
    cout << (!true) << endl;
    return 0;
    cout << x+1000 << endl; // this will not run after return 0
}