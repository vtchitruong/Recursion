#include <iostream>

using namespace std;

int factorial(int n)
{
    // Trường hợp cơ sở
    if (n == 0 || n == 1)
        return 1;

    // Trường hợp đệ quy
    return factorial(n - 1) * n;
}

int main()
{
    int num;
    cout << "Nhập số nguyên dương: ";
    cin >> num;

    int result = factorial(num);
    cout << num << "! = " << result;

    return 0;
}