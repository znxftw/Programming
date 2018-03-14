#Question :  https://www.hackerrank.com/contests/projecteuler/challenges/euler023
from math import sqrt
def divSum(n):
    sum=1
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            sum+=i
            if(n/i != i):
                sum+= n/i
    return sum

l=[]
for i in range(1,28123):
    if(divSum(i)>i):
        l.append(i)
for i in range(int(input())):
    n=int(input())
    if(n>28123):
        print("YES")
    else:
        ret=0
        for i in l:
            if(i>n/2):
                break
            if(n-i in l):
                print("YES")
                ret=1
                break
        if(ret==0):
            print("NO")
                