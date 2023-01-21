#include <iostream>
using namespace std;

void swap1(int x, int y) //x and first_num point to different memory blocks
{
    int z = x;
    x = y;
    y = z;
}

void swap2(int &x, int &y) //x  point to the  memory block of first_num
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int first_num = 10;
    int second_num = 20;

    cout << "before swap: "
         << "\n";
    cout << first_num<< " " << second_num << "\n";

    //
    cout << "after swap: "
         << "\n";

    swap1(first_num, second_num);
    cout << first_num << " " << second_num << "\n";

    swap2(first_num, second_num);
    cout << first_num << " " << second_num << "\n";

    return 0;


}