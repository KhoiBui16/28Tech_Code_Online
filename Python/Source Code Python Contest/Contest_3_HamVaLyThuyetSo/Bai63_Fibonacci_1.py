def fibo1(n):
    if n == 1:
        print(1)
    elif n == 2:
        print(1, 1, sep = '\n')
    else:
        f1, f2 = 1, 1
        print(f1, f2, sep = '\n')
        for i in range(3, n + 1):
            fn = f1 + f2
            print(fn)
            f2, f1 = f1, fn
                
if __name__ == '__main__':
    n = int(input())
    fibo1(n)