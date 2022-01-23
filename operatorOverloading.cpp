#include <iostream>
using namespace std;

class complexNo
{
public:
    int real, imaginary;
    complexNo operator+(complexNo &obj)
    {
        complexNo temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }
};

int main()
{
    complexNo a, b;
    a.real = 5;
    a.imaginary = 6;
    b.real = 7;
    b.imaginary = 8;
    complexNo c = a + b;
    cout << c.real << " " << c.imaginary;
}