//q3-write a c++ program to enter temperature in fahrnheit and convert it into celsius.
#include<iostream>
using namespace std;

int main()
{
	double fahrenheit,celsius;
cout<< "write temp in fahrenheit and convert it into celsius "<<endl;
cout<< "-----------------------------------------------------"<<endl;		
cout<<  " temp in fahrenheit?"<<endl;
cin>>fahrenheit;
celsius=(fahrenheit-32)/1.8;
cout<< "temp in celsius="<<celsius  <<endl;
return 0;
}
