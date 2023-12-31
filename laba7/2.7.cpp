#include <iostream>
using namespace std;

int main(void)
{
	double pi4 = 0.0;
	long n;
	std::cout << "Number of iterations? ";
	std::cin >> n;

	for (long i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			pi4 += 1.0 / (2 * i + 1);
		}
		else
		{
			pi4 -= 1.0 / (2 * i + 1);
		}
	}

	cout.precision(20);
	std::cout << "Pi = " << (pi4 * 4.0) << endl;
	return 0;
}
