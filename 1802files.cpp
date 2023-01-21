#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create a text string, which is used to output the text file
    string my_text;

    // read from the text file
    ifstream my_read_file("filename.txt");

    // use a while loop together with the getline() function to read the file line by line
    while (getline(my_read_file, my_text))
    {
        // output the text from the file
        cout << my_text;
    }

    // close the file
    my_read_file.close();
}