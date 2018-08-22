//*q2-write a c++ program to enter temperature in celsius and convert it into fahrenheit.

#include<iostream>
using namespace std;
	int main()
{
	double celsius,fahrenheit;
cout << "write temp in celsius and convert it into fahrenheit " << endl;
cout << "temp in celsius= " << endl;
cin>>celsius;
fahrenheit=1.8*celsius+32;
cout<< "temperature in fahrenheit scale ="<<fahrenheit << endl;
return 0;
}
