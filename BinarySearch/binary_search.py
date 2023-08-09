import random as rd

#  Khởi tạo mảng
def init(size):
    a = [rd.randint(0, 9) for i in range(size)]
    a.sort()
    return a


# In mảng theo hàng ngang
def show(a, message):
    print(f'{message}:')
    print(*a, sep=' ')

# Hàm tìm kiếm nhị phân viết theo kỹ thuật đệ quy
def binary_search(a, k, left, right):
    
    # Không tìm thấy k
    if left > right:
        return -1
    
    mid = (left + right) // 2
    
    # Tìm thấy k tại vị trí chính giữa là mid
    if a[mid] == k:
        return mid
    
    if a[mid] < k:
        return binary_search(a, k, mid + 1, right)
    else:
        return binary_search(a, k, left, mid - 1)


if __name__ == '__main__':
    n = 15
    Arr = init(n)
    show(Arr, 'Mảng ban đầu')

    value = 6
    left = 0
    right = n - 1

    found = binary_search(Arr, value, left, right)
    print(f'Found at position: {found}')