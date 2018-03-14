# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler004
#!/bin/python3
import sys
t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    for i in range(n-1,101100,-1):
        if(str(i)==str(i)[::-1]):
            for j in range(100,1000):
                if(i%j==0 and 1000>i/j and i/j>=100):
                    print(i)
                    i=1
                    break
        if(i==1):
            break