# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler067
for i in range(int(input())):
    n=int(input())
    l=[]
    sums=[]
    for j in range(n):
        l.append(list(map(int,input().split(' '))))
    for j in range(n-2,-1,-1):
        for k in range(0,j+1):
            l[j][k]+=max(l[j+1][k],l[j+1][k+1])
    print(l[0][0])    
    