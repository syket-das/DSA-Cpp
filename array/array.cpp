#include<iostream>

using namespace std;

int main()
{

    int A[10] = {1,2,3,4,5};


    cout<<sizeof(A)<<endl;
    cout<<sizeof(A[0])<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }


    std::cout << "Using foreach loop" << std::endl;


    for(int x:A)
    {
        cout<<x<<endl;
    }


    std::cout << "set array size from user input ";

    int n;
    cin>>n;
    int B[n];
    B[0] = 10;

   for(int x:B)
    {
        cout<<x<<endl;
    }

    




    return 0;
}