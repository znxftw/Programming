# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler017
def numToWords(num,join=True):
    units = ['','One','Two','Three','Four','Five','Six','Seven','Eight','Nine']
    teens = ['','Eleven','Twelve','Thirteen','Fourteen','Fifteen','Sixteen','Seventeen','Eighteen','Nineteen']
    tens = ['','Ten','Twenty','Thirty','Forty','Fifty','Sixty','Seventy','Eighty','Ninety']
    thousands = ['','Thousand','Million','Billion','Trillion']
    words = []
    if num==0: words.append('Zero')
    else:
        numStr = '%d'%num
        numStrLen = len(numStr)
        groups = (numStrLen+2)/3
        numStr = numStr.zfill(groups*3)
        for i in range(0,groups*3,3):
            h,t,u = int(numStr[i]),int(numStr[i+1]),int(numStr[i+2])
            g = int(groups-(i/3+1))
            if h>=1:
                words.append(units[h])
                words.append('Hundred')
            if t>1:
                words.append(tens[t])
                if u>=1: words.append(units[u])
            elif t==1:
                if u>=1: words.append(teens[u])
                else: words.append(tens[t])
            else:
                if u>=1: words.append(units[u])
            if (g>=1) and ((h+t+u)>0): words.append(thousands[g]+'')
    if join: return ' '.join(words)
    return words
t=int(input())
for i in range(t):
    print(numToWords(int(input())))