#include<stdio.h>
#include<iostream>

using namespace std;

template<class T>

void swapping(T &num1,T &num2)
{
T temp;

temp = num1;
num1 = num2;
num2 = temp;
}

int main()
{

int n1 , n2 ;
float f1 , f2 ;
char c1 , c2 ;

cout<<"Enter two values of Integer, floating point and char each : "<<endl;
cin>>n1>>n2;
cin>>f1>>f2;
cin>>c1>>c2;

cout << "Before swapping : i1 ="<< n1 << "\ti2 = "<< n2 << endl;
cout << "Before swapping : f1 ="<< f1 << "\tf2 = "<< f2 << endl;
cout << "Before swapping : c1 ="<< c1 << "\tc2 = "<< c2 << endl;

swapping(n1,n2);
swapping(f1,f2);
swapping(c1,c2);
cout<<"\n\n"<<endl;

cout << "After swapping : i1 ="<< n1 << "\ti2 = "<< n2 << endl;
cout << "After swapping : f1 ="<< f1 << "\tf2 = "<< f2 << endl;
cout << "After swapping : c1 ="<< c1 << "\tc2 = "<< c2 << endl;

return 0;

}