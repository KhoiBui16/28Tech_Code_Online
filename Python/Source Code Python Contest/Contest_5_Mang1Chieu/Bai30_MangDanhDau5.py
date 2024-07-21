if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    freq = [0] * 10000001
    for x in a:
        freq[x] += 1
    max_freq = max(freq)
    for x in a:
        if freq[x] == max_freq:
            print(x, max_freq)
            break