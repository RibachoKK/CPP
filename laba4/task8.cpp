#include <iostream>
using namespace std;

int main()
{
	int a, b;
	float c, d;

	cout << "Enter 1 and 2 numbers: \n";
	cin >> a >> b;
	c = (float)1 / a;
	d = (float)1 / b;
	if (c - d <= 0.000001 && c - d >= -0.000001)
	{
		cout << "Results are equal (by 0.000001 epsilon) :)";
	}
	else
	{
		cout << "Results are not equal (by 0.000001 epsilon) :(";
	}
}