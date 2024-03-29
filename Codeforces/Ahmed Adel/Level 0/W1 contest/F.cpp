# // F. Logic Case
# // Codeforces - Week#1 Contest
# // https://codeforces.com/group/42BcTs2lav/contest/405441/problem/F
# // 2024-03-24 19:58:43

w = input().split()
x = int(w[0])
y = int(w[1])
if x > y:   
	x, y = y, x
x -= 1
res = ((y*(y+1)//2) - (x*(x+1)//2)) - x-y-1
print(int(res))