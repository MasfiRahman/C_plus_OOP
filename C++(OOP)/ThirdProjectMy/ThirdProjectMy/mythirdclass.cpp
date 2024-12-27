#include "mythirdclass.h"
#include<iostream>
using namespace std;
MyThirdClass::MyThirdClass()
{
    cout<<"Constructor is called"<<endl;
}
MyThirdClass::~MyThirdClass()
{
    cout<<"Destructor is called"<<endl;
}
void MyThirdClass::display()
{
    cout<<"Display is called"<<endl;
}
