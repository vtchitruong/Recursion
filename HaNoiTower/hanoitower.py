def guide(d, s, t):
    print(f'Move disc {d} from rod {s} to rod {t}')


def hanoi_tower(disc, source, target):
    spare = 0

    if disc == 1:
        guide(disc, source, target)
        return
    
    spare = 6 - (source + target)

    # Di chuyển n - 1 đĩa nằm trên sang cột trung gian
    hanoi_tower(disc - 1, source, spare)

    # Di chuyển đĩa thứ n (nằm dưới cùng) sang cột đích 
    guide(disc, source, target)

    # Di chuyển n - 1 đĩa còn lại từ cột trung gian sang cột đích
    hanoi_tower(disc - 1, spare, target)


if __name__ == '__main__':
    n = 4 # số đĩa
    s = 1 # cột nguồn
    t = 3 # cột đích

    hanoi_tower(n, s, t)

    