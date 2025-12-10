/*
the useful classes for working with file in C++ are:
1. fstreambase
2. ifstrea-->derived from fstreambase
3. ofstream-->derived from fstreambase

in order to work with files in C++. file needs to be open and primarly there are 2 ways:
1. using constructor
2. using member function open() of the class
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string sw = "zooby shah";
    // opening file using constructor and writing
    // ofstream in("52_samplefile.txt"); // write operation in 52_samplefile.txt
    // in << sw;

    string sr;
    // opening file using constructor and reading
    ifstream out("52_samplefile.txt"); // read operation of 52_samplefile.txt

    // out >> sr; // used to read the single word
    // cout << sr;

    getline(out, sr); // used to read the complete one line sentence
    cout << sr << endl;
    return 0;
}