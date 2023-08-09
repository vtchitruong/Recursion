def akm(m, n):
    global cnt
    cnt += 1

    if m == 0:
        return n + 1
    
    if n == 0:
        return akm(m - 1, 1)
    
    return akm(m - 1, akm(m, n - 1))

if __name__ == '__main__':
    m = 3
    n = 6
    cnt = 0

    A = akm(m, n)
    
    print(f'A({m}, {n}) = {A} with {cnt} recursive calls.')