# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler008
#!/bin/python3

import sys
import functools

t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    num = input().strip()
    sums=[]
    for i in range(n-k):
        sums.append(functools.reduce(lambda x,y :x*y,map(int,list(str(num)[i:i+k])),1))
    print(max(sums))