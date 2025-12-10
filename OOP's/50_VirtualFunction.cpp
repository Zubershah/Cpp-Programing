// #include <iostream>
// using namespace std;
// class base
// {
// public:
//     int var;
//     virtual void display()
//     {
//         cout << "the base class variable is " << var << endl;
//     }
// };
// class derived : public base
// {
// public:
//     int varderived;
//     void display()
//     {
//         cout << "the derived class variable is " << varderived << endl;
//         cout << "the base class variable is " << varderived << endl;
//     }
// };
// int main()
// {
//     base *ptr;
//     // base obj;
//     derived objderived;
//     ptr = &objderived;
//     ptr->display();
//     return 0;
// }

/*************Virtual Function Example***********/
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
    virtual void display()
    {
        cout << "bogus code" << endl;
    }
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
/*
Rules for virtual function
1. they cannot be static
2. they are accessed by object pointers
3. virtual function can be a friend of another class
4. A function in base class might not be used
5. if a virtual function is defined in the base class,
   there is no necessity of redefining it in the derived class
*/