#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private:
        int id = 23101182;
        string name = "Mashfi";

     friend class B;
};
class B
{
     public:
          void display(A ob)
          {
              cout<<ob.id<<endl;
              cout<<ob.name<<endl;
          }
};
int main(){

     A ob1;
     B ob2;

    ob2.display(ob1);

getch();
}
