#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr; // data_type *arr;
    int size;
    vector(int m) // m = 3;
    {
        size = m;          // size = 3;
        arr = new T[size]; // array of the 3 data_type pointing to 1st index
    }
    T dotproduct(vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
            /*
            arr[i]: You did not specify an object.
            In C++, when you access a class member variable without specifying an object,
            it automatically refers to the Calling Object (v1).
            */
        }
        return d;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;

    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

    // int a = v1.dotproduct(v2);
    // cout << a << endl;

    vector<float> v1(3);
    v1.arr[0] = 1.44;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}