a, b, c, d = map(int, input().split())
res = a*b*c*d
res = str(res)
if res:
    print(res[-2:])
# else: print(0)