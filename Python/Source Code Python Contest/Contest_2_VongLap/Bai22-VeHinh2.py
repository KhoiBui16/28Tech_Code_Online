n = int(input())
# sua bai cach 2:
# hinh 1:
for i in range(1, n + 1):
    for j in range(i):
        print('*', end = '')
    print()
print()
# hinh 2:
for i in range(n, 0, -1):
    for j in range(i):
        print('*', end = '')
    print()
print()
# hinh 3:
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if j <= n - i:
            print(' ', end = '')
        else:
            print('*', end = '')
    print()
print()
# hinh 4:
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if j < i:
            print(' ', end = '')
        else:
            print('*', end = '')
    print()
# hinh 5:
for i in range(1, n + 1):
    for j in range(1, i + 1):
        if i == 1 or i == n or i == j or j == 1:
            print('*', end = '')
        else:
            print(' ', end = '');
    print()
'''
    Code by anh khoi
    n = int(input())
for i in range(n):
    for j in range(i + 1):
        print('*', end = '')
    print()
print()
for i in range(n):
    for j in range(n - i):
        print('*', end = '')
    print()
print()
for i in range(n):
    for j in range(n - i - 1):
        print(' ', end = '')
    for j in range(i + 1):
        print('*', end = '')
    print()
print()
for i in range(n):
    for j in range(i):
        print(' ', end = '')
    for j in range(n - i):
        print('*', end = '')
    print()
print()
for i in range(n):
    for j in range(i + 1):
        if i == 0 or i == n - 1 or j == 0 or j == i:
            print('*', end = '')
        else:
            print(' ', end = '')
    print()
'''