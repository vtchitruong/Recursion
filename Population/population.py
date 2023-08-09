def population(year):
    if year == 2021:
        return 98.4E+6

    return population(year - 1) * (1 + 0.01) # The growth rate is 1.00

if __name__ == '__main__':
    year = int(input('Enter a year: '))
    p = population(year)
    print(f'The population of Vietnam will be {p:.0f}')