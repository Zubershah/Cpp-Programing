#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write("52_Samplefile.txt");
    cout << "enter the name" << endl;
    string name;
    cin >> name;
    write << "my name is " + name;
    write.close();

    ifstream read("52_Samplefile.txt");
    string content;
    // read >> content;
    // cout << content << endl;
    getline(read, content);
    cout << content << endl;
    read.close();
    return 0;
}