#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    public:
      string name;
      int age;

      void display1()
      {
          cout<<"Name : "<<name<<endl;
          cout<<"Age :  "<<age<<endl;
      }
};
class Student:public person
{
    //name,age,display1()
    public:
    int id;
    void display2()
    {
        cout<<"ID : "<<id<<endl;
        display1();
    }
};
int main(){

Student s1;
s1.id = 23101182;
s1.name = "Mashrur Rahman";
s1.age = 23;
s1.display2();

getch();
}
