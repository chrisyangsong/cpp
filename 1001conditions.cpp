#include <iostream>
using namespace std;

int main()
{
    if (20 > 18)
    {
        cout << "20 is greater than 18" << endl;
    }

    int time = 20;

    if (time < 18)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening." << endl;
    }

    if (time<10)
    {
        cout << "Good morning" << endl;
    }
    else if (time<25)
    {
        cout << "Good day"  << endl;
    }
    else
    {
        cout << "Good evening." << endl;
    }

    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;
    return 0;


}