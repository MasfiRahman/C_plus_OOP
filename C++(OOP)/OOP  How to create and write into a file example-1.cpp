#include<iostream>
#include<fstream>
using namespace std;
int main(){


   ofstream file;

   file.open("student.txt2");
   file<<"I am Mashrur.I am a student.I live in Dhaka";
   file.close();

  return 0;
}
