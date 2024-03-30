# // A. Packing Rectangles
# // Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
# // https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
# // 2024-03-30 10:33:13
ll = input().split()
w, h, n = int(ll[0]), int(ll[1]), int(ll[2])
l = 0
r = 10**18
res = -1
def ok(m):
	val = int(m/w)*int(m/h)
	print(val)
	return val >= n
while l<=r:
	m = (l+r)/2
	m = int(m)
	if ok(m) == True:
		r = m-1
		res = m
	else: l = m+1
print(res)
# for x in range(res, res+1000):
	# print(ok(x))