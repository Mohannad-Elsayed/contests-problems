# // F. Towers Upgrade
# // Codeforces - Week 2 Sheet
# // https://codeforces.com/group/42BcTs2lav/contest/404038/problem/F
# // 2024-03-25 16:16:02
w = input().split()
a, b, c, x = int(w[0]), int(w[1]), int(w[2]), abs(int(w[0])-int(w[1]))
m = 10**9+7
lst = [a**b%m, b**a%m, c**x%m]
lst.sort()
print(lst[0], lst[1], lst[2])