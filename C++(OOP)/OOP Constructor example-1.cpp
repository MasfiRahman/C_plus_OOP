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

       Student (int x,double y){

            id = x;
            gpa = y;
       }
};
int main(){


  Student Masfi(23101182,2.53);
  Masfi.display();

  Student Mahi(23101186,2.58);
  Mahi.display();

 Student Ritu(23101187,3.76);
  Ritu.display();

getch();
}
