#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    try   //try is a keyword
{
    int num1,num2;

    cout<<"Enter first number : ";
    cin>>num1;

    cout<<"Enter second number : ";
    cin>>num2;

    if(num2==0){
        throw -1;//throw is a keyword
    }
    double result = (double)num1/num2;
    cout<<"Result : "<<result<<endl;
}
   catch(...) //catch is a keyword
{
    cout<<"Sorry!Divide by zero is not possible"<<endl;
    cout<<"Please try again"<<endl;
}
getch();
}
