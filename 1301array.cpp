#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[4] = {"volvo","bmw","ford","mazda"};
    string bands[] = {"volvo","bmw","ford","mazda","tesla"};
    int my_num[3] = {10,20,30};

    cout << cars[0] << endl;
    
    for (int i = 0; i<4;i++)
    {
        cout << i << ": "<<cars[i] << "\n";
    }

    return 0;

}