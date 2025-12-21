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
//         cout << "the base class variable is " << var << endl;
//     }
// };
// int main()
// {
//     base *ptr;
//     derived objderived;
//     ptr = &objderived;
//     ptr->var = 5;
//     /*
//     stil we can't set int varderived = 4; Reason: ptr is base class
//     */
//     ptr->display(); // here displayed will be derived class Reason: Virtual function (virtual void display())
//     return 0;
// }

/*************Virtual Function Example***********/
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
    virtual void display()
    {
        cout << "No content" << endl;
    }
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
    rating = 4.1;
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
/*
Rules for virtual function
1. they cannot be static
2. they are accessed by object pointers
3. virtual function can be a friend of another class
4. A function in base class might not be used
5. if a virtual function is defined in the base class,
   there is no necessity of redefining it in the derived class
*/