#include<iostream>
#include<string>
#include<cstring>


using namespace std;

    struct Rectangle
    {
        int length;
        int breadth;
    };



    struct Student 
    {
        int rollno;
        char name[20];
        float marks;
        char address[50];
    };



    struct Complex
    {
        int real;
        int imag;
    };


    struct Employee
    {
        int empid;
        char name[20];
        float salary;
    };


int main()
{


    // struct Rectangle r ;


    struct Rectangle r = {10,5};

    // r.length = 10;
    // r.breadth = 5;


    cout<<r.length<<endl;
    cout<<r.breadth<<endl;


    struct Student s1 = {1,"Raj",90.5,"Pune"};


    cout<<s1.rollno<<endl;
    cout<<s1.name<<endl;
    cout<<s1.marks<<endl;
    cout<<s1.address<<endl;


    struct Student s2;
    s2.rollno = 2;
    strcpy(s2.name,"Rohan");
    s2.marks = 80.5;

    // ------------------------
    strcpy(s2.address,"Mumbai");
    // s2.address = "Mumbai"; // error




    // -------------------
    cout<<s2.rollno<<endl;
    cout<<s2.name<<endl;
    cout<<s2.marks<<endl;
    cout<<s2.address<<endl;
    


    // -------------------
    struct Complex c1 = {10,20};
    struct Complex c2 = {c1.real,c1.imag};

    cout<<c2.real<<endl;
    cout<<c2.imag<<endl;



    // ------------------- array of structures

    struct Employee allEmp[10];

    for(int i=0;i<10;i++)
    {
        allEmp[i].empid = i+1;
        strcpy(allEmp[i].name,"Raj");
        allEmp[i].salary = 10000;
    }


    for(int i=0;i<10;i++)
    {
        cout<<allEmp[i].empid<<endl;
        cout<<allEmp[i].name<<endl;
        cout<<allEmp[i].salary<<endl;
    }


// create and init structure 

    struct Employee homeEmp[5] = {
        {1,"Raj",50000},
        {2,"Rohan",20000},
        {3,"Ramesh",30000},
        {4,"Rajesh",40000},
        {5,"Rajesh",50000}
    };



    // for(int i=0;i<5;i++)
    // {
    //     cout<<homeEmp[i].empid<<endl;
    //     cout<<homeEmp[i].name<<endl;
    //     cout<<homeEmp[i].salary<<endl;
    // }


    printf("%d %s %f",homeEmp[0].empid,homeEmp[0].name,homeEmp[0].salary);




    return 0;
}