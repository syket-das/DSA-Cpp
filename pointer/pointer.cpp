#include <iostream>

#include <stdlib.h>

using namespace std;

int main()
{

    int a = 10;

    int *p;
    p = &a;

    cout << "Value of a is: " << a << endl;

    cout << "Address of a is: " << &a << endl;

    cout << "Value of p is: " << p << endl;

    cout << "Address of p is: " << &p << endl;

    cout << "Value of *p is: " << *p << endl; // *p is the value of the variable that p is pointing to (dereferencing)

    // -------------------------

    int *b;

    // c language
    b = (int *)malloc(5 * sizeof(int)); // allocate memory for 5 integers and return a pointer to the first integer in the allocated memory

    // c++ language
    b = new int[5]; // allocate memory for 5 integers and return a pointer to the first integer in the allocated memory (new is a keyword)

    int j = 10;
    int *k;

    k = &j;
    printf("using pointer: %d ", *k); // 10
    printf("Address %d %d", k, &j); // 0x7ffeeb2b9f7c 0x7ffeeb2b9f7c



    // --------------------------------pointer to an array--------------
    int A[5] = {1, 2, 3, 4, 5};
    int *pA;
    pA = A; // pA = &A[0]

    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i << "] = " << A[i] << endl;
        cout << "pA[" << i << "] = " << pA[i] << endl;
    }


    return 0;
}