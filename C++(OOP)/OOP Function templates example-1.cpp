#include<iostream>
#include<conio.h>
using namespace std;
template <class myTemplate>
myTemplate add(myTemplate a,myTemplate b)
{
    return a+b;
}
int main(){

   cout<<add(10,20)<<endl;
   cout<<add(10.23,25.65)<<endl;



getch();
}
