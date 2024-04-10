# Integer Factorization (20 digits)
import math
while 1:
    x = int(input())
    if x == 0: 
        break
    p = {}
    while x%2==0:
        if 2 in p:
            p[2] += 1
        else: p[2] = 1
        x //= 2
    bound = math.isqrt(x)
    for i in range(3, bound+1, 2):
        while x%i==0:
            if i in p:
                p[i] += 1
            else: p[i] = 1
            x //= i
        bound = math.isqrt(x)
    if x > 1:
        p[x] = 1
    kys = sorted(p.keys())
    for k in kys:
        print(f"{k}^{p[k]}", end=" ")
    print()