//q4-write a c++ program to convert days into years, weeks and months
#include<iostream>
using namespace std;
	int main()
{
	double days,years,weeks,months ;
cout<< "write the time period in days and convert it into weeks ,months,years" << endl;
cout<< "-----------------------------" << endl;
cin>>days;
weeks=days/7;
months=days/30;
years=days/365;
cout << "time period in weeks =" << weeks << endl;
cout << "time period in months =" << months << endl;
cout << "time period in years =" << years << endl;
return 0;
}
