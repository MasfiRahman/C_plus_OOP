#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
   public:
       int id;
       double gpa;
};
int main(){

  Student Masfi,Mahi,Ritu;


  Masfi.id = 23101182;
  Masfi.gpa = 2.53;

  cout<<"Masfi.id ="<<Masfi.id<<"  "<<"Masfi.gpa = "<<Masfi.gpa<<endl;

  Mahi.id = 23101186;
  Mahi.gpa = 2.58;

  cout<<"Mahi.id = "<<Mahi.id<<"  "<<"Mahi.gpa = "<<Mahi.gpa<<endl;

  Ritu.id = 23101187;
  Ritu.gpa = 3.76;

  cout<<"Ritu.id = "<<Ritu.id<<"  "<<"Ritu.gpa = "<<Ritu.gpa<<endl;


getch();
}
