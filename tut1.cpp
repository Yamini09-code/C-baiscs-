#include <iostream> // including header file helps in input output functionalities
using namespace std;

int glo =9; //global variable
//local and global variables can have same names but local variable gets precedence
//varaible inside a function becomes local variable its scope remains inside that function only
int main(){ // main is entry point of any program
//int a =4, b =15;
int glo = 6; //local variable inside main function
int a =4;
int b = 5;
float pi = 3.14;
char c = 'y';
bool p = false;
cout <<" value of a is " <<a<<endl;
cout <<"value of b is " << b<<endl; 
cout<<"value of pi is"<<pi<<endl;
cout<<" value of c is"<<c<<endl;
cout <<glo<<endl;
cout <<p;
    // int float character boolean double - datatypes
    //local variable has precedence over global variable
    
    return 0;
}