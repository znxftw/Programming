# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler015
from math import factorial
from functools import reduce
from operator import mul
def ncr(n, r):
    r = min(r, n-r)
    if r == 0: return 1
    num = reduce(mul, range(n, n-r, -1))
    den = reduce(mul, range(1, r+1))
    return num//den
t=int(input())
for i in range(t):
    n,m=map(int,input().split(' '))
    result = int(pow(ncr(n+m,n),1,1000000007))
    print(result)