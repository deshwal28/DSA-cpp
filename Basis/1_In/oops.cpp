#include<iostream>
using namespace std;
class Student
{ 
    public:
    string name;
    int age ,roll_number;
    string grade;
    //Function Getter and Setter
    public:
    void setname(string s)
    {
        name=s;

    }
    void setage(int a)
    {
        age=a;

    }
    void setroll_number(int r)
    {
        roll_number =r;

    }
    void setgrade(string s)
    {
        grade=s;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    
    };

int main()
{
    Student S1;
    S1.setname("khush");
    S1.setage(21);
    S1.setroll_number(4);
    S1.setgrade("A++");
    S1.getname();
   
}