a, b, c , d = map(int, input().split())
min_num = a
max_num = a
# tim so lon nhat
if b > max_num:
    max_num = b
    if c > max_num:
        max_num = c
    elif d > max_num:
        max_num = d
# tim so nho nhat
if b < min_num:
    min_num = b
    if c < min_num:
        min_num = c 
    elif d < min_num:
        min_num = d
print(max_num, min_num, sep = ' ')

# cach 2 co the 3 if doc lap nhau
# cach 3 co the xai ham min, max cua 1 list
'''
max = max(a, b, c, d)
min = min(a, b, c, d)
print(max, min, sep = ' ')
'''