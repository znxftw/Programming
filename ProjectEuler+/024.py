#Question :  https://www.hackerrank.com/contests/projecteuler/challenges/euler024
from itertools import permutations
from math import factorial
for i in range(int(input())):
    word="abcdefghijklm"
    n = int(input())
    n-=1
    result=[]
    for j in range(12,-1,-1):
        temp=factorial(j)
        q=int(n/temp)
        n=n%temp
        result.append(word[q])
        word = word.replace(word[q], "")
    print(''.join(result))