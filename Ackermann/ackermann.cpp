#include <bits/stdc++.h>

using namespace std;

int akm(int m, int n, int *cnt)
{
    // track the number of times the function is called
    (*cnt)++;

    if (!m) return n + 1;
    if (!n) return akm(m - 1, 1, cnt);

    return akm(m - 1, akm(m, n - 1, cnt), cnt);
}

int main()
{
    int m = 3;
    int n = 6;
    int times = 0; // init called times
   
    cout << akm(m, n, &times);
    cout << " with " << times << " recursive calls.";

    return 0;
}