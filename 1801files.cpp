#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // create and open a text file
    ofstream my_file("filename.txt");

    // write to file
    my_file << "Files can be tricky, but it is fun enough!";

    // close the file
    my_file.close();
}