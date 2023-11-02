#include <iostream>

using namespace std;

int fibonacci(int n)
{
    // Trường hợp cơ sở
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // Trường hợp đệ quy
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;
    cout << "Nhập số nguyên dương: ";
    cin >> num;

    int result = fibonacci(num);
    cout << "Fibonacci [" << num << "] = " << result;
    
    return 0;
}