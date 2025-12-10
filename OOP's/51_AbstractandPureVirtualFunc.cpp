#include <iostream>
#include <string.h>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //pure virtual function;
    /* 
    if in derived class display(); function is not write it will throw error, 
    unlike in virtual function the base class display(); function will compile

    Abstract base class means not used for creating object instead it is used to inherit another class
    Abstract base class means atleast one pure virtual functilon exist.
    */
};
class cwhvideo : public cwh
{
    float vidlen;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        vidlen = vl;
    }
    void display()
    {
        cout << "this is a amazing video with title " << title << endl
             << "has a rating of " << rating << " out of 5 star" << endl
             << "length of this video is " << vidlen << " minutes" << endl;
    }
};
class cwhtext : public cwh
{
    int wordcount;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        wordcount = wc;
    }
    void display()
    {
        cout << "this is a amazing text tutorial with title " << title << endl
             << "has a rating of " << rating << " out of 5 star" << endl
             << "number of words in this tutorial is " << wordcount << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vidlen;
    int wordcount;

    // for video
    title = "Django tutorial";
    rating = 4.5;
    vidlen = 5.51;
    cwhvideo Djvideo(title, rating, vidlen);
    // Djvideo.display();

    // for word
    title = "Django tutorial";
    rating = 4.5;
    wordcount = 5200;
    cwhtext Djtext(title, rating, wordcount);
    // Djtext.display();

    cwh *tuts[2];
    tuts[0] = &Djvideo;
    tuts[1] = &Djtext;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();
    return 0;
}