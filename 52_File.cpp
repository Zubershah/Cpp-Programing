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
    // opening file using constructor and writing
    // string sw = "i am zooby shah how are you";
    // ofstream in("52_samplefile.txt"); // write operation in 52_samplefile.txt
    // in << sw;

    // opening file using constructor and reading
    string sr;
    ifstream out("52_samplefile.txt"); // read operation of 52_samplefile.txt
    // out >> sr;                         // used to read the single word
    // cout << sr;

    // used to read the complete one line sentence
    getline(out, sr);
    cout << sr;
    return 0;
}