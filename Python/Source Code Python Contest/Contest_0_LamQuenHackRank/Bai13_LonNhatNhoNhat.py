from math import *
x = int(input())
y = int(input())
z = int(input())
t = int(input())
so_lon_hon = max([x, y]) 
so_nho_hon = min([z, t])
so_lon_nhat = max([x, y, z])
so_nho_nhat = min([x, y, z, t])
print(so_lon_hon, so_nho_hon, so_lon_nhat, so_nho_nhat, sep = '\n')