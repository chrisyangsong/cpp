#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "access granted - you are old enough.";
        }
        else
        {
            throw(age); // throw age out to catch
        }
    }
    catch(int my_num) // get exception of type int from throw
    {
        cout << "access denied - you must be at least 18 years old. \n";
        cout << "age is: " << my_num << endl;
    }

try
{
    int age = 15;
    if (age >= 18)
    {
        cout << "Access granted - you are old enough";
    }
    else
    {
        throw 505;
    }
    
}
catch(...) // get all the exception
{
   cout << "access denied - you must be at least 18 years old. \n";
}

    
}


