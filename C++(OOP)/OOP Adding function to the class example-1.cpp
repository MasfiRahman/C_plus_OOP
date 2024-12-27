#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    public:
       int id;
       double gpa;

       void display(){

         cout<<id<<"   "<<gpa<<endl;
       }
};
int main(){
  Student Masfi,Mahi,Ritu;

  Masfi.id = 23101182;
  Masfi.gpa = 2.53;
  Masfi.display();

  Mahi.id = 23101186;
  Mahi.gpa = 2.58;
  Mahi.display();

  Ritu.id = 23101187;
  Ritu.gpa = 3.76;
  Ritu.display();

getch();
}
