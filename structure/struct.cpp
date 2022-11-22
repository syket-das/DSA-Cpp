#include<iostream>

using namespace std;

    struct Rectangle
    {
        int length;
        int breadth;
    };


int main()
{


    // struct Rectangle r ;


    struct Rectangle r = {10,5};

    // r.length = 10;
    // r.breadth = 5;


    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    



    return 0;
}