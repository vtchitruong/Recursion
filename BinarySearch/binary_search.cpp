#include <iostream>
#include <algorithm>

using namespace std;

// Khởi tạo mảng
int* init(int size)
{
    int* a = new int[size]; 
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 10;
    }

    sort(a, a + size);

    return a;
}

// In mảng theo hàng ngang
void show(int* a, int size, string message)
{
    cout << message << ":\n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}

// Hàm tìm kiếm nhị phân viết theo kỹ thuật đệ quy
int binarySearch(int* a, int k, int left, int right)
{
    // Không tìm thấy k
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    // Tìm thấy k tại vị trí chính giữa là mid
    if (a[mid] == k)
    {
        return mid;
    }

    if (a[mid] < k)
    {
        return binarySearch(a, k, mid + 1, right);
    }
    else
    {
        return binarySearch(a, k, left, mid - 1);
    }
}

int main()
{
    int n = 15;
    int* Arr = init(n);
    show(Arr, n, "Mảng ban đầu");

    int value = 6;
    int left = 0;
    int right = n - 1;
    int found = binarySearch(Arr, value, left, right);
    cout << "Found at position: " << found << endl;

    return 0;
}