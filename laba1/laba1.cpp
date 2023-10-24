#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int a = 1;
    double b = 0.001;
    double result;

    result = cbrt((a-b)/ (b + a)) * exp(log(cos(a-b) * M_PI / 8)) / 0.137;
    std::cout << result;
}