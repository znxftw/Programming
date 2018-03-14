# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler016
for i in range(int(input())):
    print(sum(map(int,list(str(pow(2,int(input())))))))