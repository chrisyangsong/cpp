#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string first_name = "John";
    // string last_name = "Doe";
    // string full_name = first_name +  last_name;
    // cout << full_name << endl;
    
    // full_name = first_name + " " + last_name;
    // cout << full_name << endl;

    // full_name = first_name.append(last_name);
    // cout << full_name << endl;

    // string txt = "ABCDEFG";
    // cout << "THE LENGTH OF THE TXT STRING IS:" << txt.length() << endl;
    // cout << "THE LENGTH OF THE TXT STRING IS:" << txt.size() << endl;   


    std::string my_string = "Hello";
    cout << my_string[0] << endl;

    my_string.replace(0,2,"J"); // 0 to 2 become "J"
    cout << my_string << endl;

    // return 0;
}