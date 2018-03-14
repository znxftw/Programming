// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler013
#include <iostream>
using namespace std;
int main() {
    int numbers[1000][50],sum[53]={0},n,s,r;
    char string[50];
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%s",string);
        for(int j=0;j<50;++j)
        {
            numbers[i][49-j]=string[j]-'0';
            sum[49-j]+=numbers[i][49-j];
        }
        
    }  
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<53;++j)
            if(sum[j]>9)
            {
                sum[j+1]+=sum[j]/10;
                sum[j]%=10;
            }  
    }
    int j=53;
        while(sum[j]==0)
            --j;
        for(int counter=0;counter<10;++counter)
            cout<<sum[j--];
    
    return 0;
}
