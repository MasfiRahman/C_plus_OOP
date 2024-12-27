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

       void setValue(int x,double y){

            id = x;
            gpa = y;
       }
};
int main(){
  Student Masfi,Mahi,Ritu;

  Masfi.setValue(23101182,2.53);
  Masfi.display();

  Mahi.setValue(23101186,2.58);
  Mahi.display();

  Ritu.setValue(23101187,3.76);
  Ritu.display();

getch();
}
