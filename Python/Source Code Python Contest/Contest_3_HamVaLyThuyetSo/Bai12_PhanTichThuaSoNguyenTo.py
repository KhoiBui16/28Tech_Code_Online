import math

''' Cách 1:
def prime_factorization(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            exponent = 0
            print(i, end = '')
            while n % i == 0:
                exponent += 1
                n //= i
            print('^', exponent, sep = '' ,end = ' ')
            if n > 1:
                print('*', end = ' ')
    if n > 1:
        print(n, '^1', sep = ' ')
''' 

# cách 2:
def prime_factorization(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            exponent = 0
            while n % i == 0:
                exponent += 1
                n //= i
            print(i, exponent, sep = '^', end = '')
            if n != 1:
                print(' * ', end = '')
    if n > 1:
        print(n, 1, sep = '^')

if __name__ == '__main__':
    n = int(input())
    prime_factorization(n)