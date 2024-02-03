from math import *

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def check_max_last_digit(n):
    check = n % 10
    while n != 0:
        digit = n % 10
        if digit > check:
            return False
        n //= 10
    return True

if __name__ == '__main__':
    n = int(input())
    cnt = 0
    for i in range(2, n + 1):
        if check_max_last_digit(i) and is_prime(i) :
            cnt += 1
            print(i, end = ' ')
    print('\n', cnt, sep = '')
    
# nên sử dụng kĩ thuật sàng số nguyên tố để tối ưu thòi gian thực hiện chương trình => tránh time limnit