def fact(n):
    if n == 0 or n == 1:
        return 1
    
    return n * fact(n - 1)


if __name__ == '__main__':
    N = 6
    f = fact(N)
    print(f'{N}! = {f}')