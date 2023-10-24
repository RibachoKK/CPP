#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter four numbers (each in the range from 1 to 255): ";
    cin >> a >> b >> c >> d;

    if (a >= 1 && a <= 255 && b >= 1 && b <= 255 && c >= 1 && c <= 255 && d >= 1 && d <= 255)
        cout << a << "." << b << "." << c << "." << d << endl;
    else
        cout << "Numbers must be in the range from 1 to 255" << endl;

    return 0;
}
