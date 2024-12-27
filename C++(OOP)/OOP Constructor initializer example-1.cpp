#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
       const int admissionfee;//constant variable
       const int examfee;//constant variable
       int id;//normal variable
     Student(int x,int y,int z)
     :admissionfee(x),examfee(y)//constant symbol initializer
     {
         cout<<admissionfee<<endl;
         cout<<examfee<<endl;
         id = z;//normal symbol initializer
         cout<<id<<endl;
     }
};
int main(){

  Student s1(40000,22500,23101182);

getch();
}
