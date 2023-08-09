#include <iostream>

using namespace std;

typedef long long int lol;

lol fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}



int main()
{
    int N = 6;
    lol f = fact(N);
    cout << N << "! = " << f;

    return 0;
}