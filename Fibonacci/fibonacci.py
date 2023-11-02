def fibonacci(n):
    # Trường hợp cơ sở
    if n == 0:
        return 0

    if n == 1:
        return 1

    # Trường hợp đệ quy
    return fibonacci(n - 1) + fibonacci(n - 2)

if __name__ == '__main__':
    num = int(input('Nhập số nguyên dương: '))

    result = fibonacci(num)
    print(f'Số Fibonacci thứ {num} là {result}')