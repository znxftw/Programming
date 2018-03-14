#Question :  https://www.hackerrank.com/contests/projecteuler/challenges/euler020
from math import factorial
t=int(input())
for i in range(t):
    print(sum(list(map(int,list(str(factorial(int(input()))))))))