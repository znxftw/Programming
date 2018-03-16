# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler071
for i in range(int(input())) :
    a,b,N = map(int,input().strip().split(' '))
    L = (0,1)
    H = (1,0)
    q = (a,b)
    while(True):
        M = (L[0]+H[0],L[1]+H[1])
        if q == M :
            break
        elif q[0]*M[1] > M[0]*q[1]:
            L = M
        else :
            H = M
    H = (L[0]+H[0],L[1]+H[1])
    while(True):
        M = (L[0]+H[0],L[1]+H[1])
        if(M[1] > N):
            break
        else :
            L = M
    print(L[0],L[1])