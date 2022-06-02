#include<iostream>
using namespace std;
int main()
{
	float f;
	cout << "Enter temperature in Fahrenheit:	";
	cin >> f;
	float c= (f-32)/1.8;
	f+=32;
	cout << "Temperature in Cilsius:	" << c;
}
