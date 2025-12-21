#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream in;
    in.open("52_samplefile.txt");
    in << "this is my name" << endl;
    in << "zooby shah";
    in.close();

    ifstream out;
    string content, contentnext;
    out.open("52_samplefile.txt");
    /*
    assume below content contain in file:
    this is my name
    zooby shah
    */
    // out >> content;                               // this --> content
    // cout << content;                              // output: this
    // out >> content >> contentnext;                // is --> content, my --> contentnext
    // cout << " " << content << " " << contentnext; // output: is my

    // this print complete oneline sentence
    // getline(out, content);
    // cout << content;

    while (out.eof() == 0)
    {
        getline(out, content);
        cout << content << endl;
    }
    out.close();
    return 0;
}