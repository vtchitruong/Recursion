#include <bits/stdc++.h>

using namespace std;

double population(int y)
{
    if (y == 2021) return 98.4E+6;
    return population(y - 1) * (1 + 0.01); // the growth rate is 1.00 %
}

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    cout << "The population of Vietnam will be " << setprecision(0) << fixed << population(year);
    return 0;
}




