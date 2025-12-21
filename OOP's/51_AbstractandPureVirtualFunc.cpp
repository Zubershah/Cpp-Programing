#include <iostream>
#include <string.h>
using namespace std;
class course
{
protected:
    string title;
    float rating;

public:
    course(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //pure virtual function;
    /* 
    if in derived class display(); function is not write it will throw error, 
    unlike in virtual function the base class display(); function will compile

    Abstract base class means not used for creating object instead it is used to inherit another class
    You can use base-class pointers to derived class objects
    Abstract base class means atleast one pure virtual functilon exist.
    */
};
class coursevideo : public course
{
    float vidlen;

public:
    coursevideo(string s, float r, float vl) : course(s, r)
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
class coursetext : public course
{
    int wordcount;

public:
    coursetext(string s, float r, int wc) : course(s, r)
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
    title = "C++ tutorial";
    rating = 4.5;
    vidlen = 5.51;
    coursevideo video(title, rating, vidlen);
    // video.display();

    // for word
    title = "C++ tutorial";
    rating = 4.5;
    wordcount = 5200;
    coursetext text(title, rating, wordcount);
    // text.display();

    course *tuts[2];
    tuts[0] = &video;
    tuts[1] = &text;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();
    return 0;
}