# // H. Hamburgers
# // Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
# // https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H
# // 2024-04-01 13:28:45
s = input()
hb, hs, hc = list(map(int, input().split()))
pb, ps, pc = list(map(int, input().split()))
mon = int(input())
l = 0
r = 10**18
rb = s.count('B')
rs = s.count('S')
rc = s.count('C')
# if rb == 0:
	# pb = 0
# if rs == 0:
	# ps = 0
# if rc == 0:
	# pc = 0
res = 0
def ok(m):
	val = 0
	val = max((m*rb-hb)*pb, 0) + max((m*rs-hs)*ps, 0) + max((m*rc-hc)*pc, 0)
	print(val, m)
	return val <= mon
while l<=r:
	m = (l+r)//2
	if (ok(m)):
		l = m+1
		res = m
	else: r = m-1
print(res)