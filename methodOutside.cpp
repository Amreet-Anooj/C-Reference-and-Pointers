#include<iostream>
using namespace std;

class Student
{
    public:
    void myMethod();
};

void Student::myMethod()
{
    cout<<"A Sophomore in SIT";
}

int main()
{
    Student s1;
    s1.myMethod();
}


/*Output:
A Sophomore in SIT*/
