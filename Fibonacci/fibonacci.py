def fibo(n):
    if n == 0:
        return 0
    
    if n == 1:
        return 1
    
    return fibo(n - 1) + fibo(n - 2)


if __name__ == '__main__':
    N = 10
    f = fibo(N)
    print(f'Fibonacci({N}) = {f}')