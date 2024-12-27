#include<iostream>
#include<conio.h>
using namespace std;
class MobileUser
{
    public:
       void call()//non-virtual function
       {
           cout<<"Hello!"<<endl;
       }
       virtual void sendMessege() = 0;//pure virtual function
};
class Masfi : public MobileUser
{
        public:
           void sendMessege()
           {
               cout<<"This is Masfi"<<endl;
           }
};


class Mahi : public MobileUser
{
        public:
           void sendMessege()
           {
               cout<<"This is Mahi"<<endl;
           }
};
int main(){

      MobileUser *m;
      Masfi mf;
      Mahi mh;

      m->call();//non-virtual function

      m = &mf;

      m->sendMessege();
      m = &mh;
      m->sendMessege();

getch();
}
