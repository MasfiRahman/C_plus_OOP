#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
  public:
      string name;

      Student (string name)
      {
          this->name = name;
      }
        void display()
        {
            cout<<name<<endl;
        }
};
int main(){

  Student s1("Mashrur Rahman");
  s1.display();

getch();
}
