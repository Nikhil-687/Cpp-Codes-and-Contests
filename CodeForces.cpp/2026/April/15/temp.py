import sys

input = sys.stdin.read
data = input().split()


t = int(data[0])
print(data, t)
idx = 1
for _ in range(t):
    a = int(data[idx])
    b = int(data[idx + 1])
    idx += 2
    if t == 2:
        a += 1
    N = a + b
    max_e = N // 2
    min_e = 1 if N % 2 == 0 else 0
    if a < min_e or a > max_e or N == 0:
        print("NO")
        continue
    print("YES")
    if N == 1:
        continue
    cur = 2
    if N % 2 == 0:
        num_p = a - 1
    else:
        num_p = a
    for __ in range(num_p):
        p = cur
        cur += 1
        l = cur
        cur += 1
        print(1, p)
        print(p, l)
    while cur <= N:
        print(1, cur)
        cur += 1