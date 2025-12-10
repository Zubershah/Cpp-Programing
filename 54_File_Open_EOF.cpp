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
    // out >> content;
    // cout << content;

    // out >> content>>contentnext;
    // cout << content<<contentnext;  //thisis
    
    while (out.eof() == 0)
    {
        getline(out, content);
        cout << content<<endl;
    }

    // getline(out, content); 
    // cout << content;
    out.close();
    return 0;
}