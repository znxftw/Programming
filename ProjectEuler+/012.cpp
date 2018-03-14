// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler012/
#include <cmath>
#include <iostream>
using namespace std;
bool isNotPrime[1000000]={false};
void init()
{
    isNotPrime[0]=isNotPrime[1]=true;
    for(int i=1;i<=sqrt(1000000);++i)
        if(!isNotPrime[i])
            for(int j=i*i;j<=1000000;j+=i)
                    isNotPrime[j]=true;
                
}
int factors(int n)
{
    int i=0,tot=1;
    while(n%2==0)
    {
        n/=2;
        i++;
    }
    if(i>0)
        tot*=i;
    for(int k=3;n!=1;k+=2)
    {   
        i=0;
        if(!isNotPrime[k])
        {
            while(n%k==0)
            {
                n/=k;
                i++;
            }
            if(i>0)
                tot*=i+1;
        }
    }
    return tot;
}

int main() {
    int n1,n2;
    int n,t;
    long long int results[1000000]={0};
    init();
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&n);
        int j=1;
        if(n>500)
            j=12374;
        n1=factors(j);
        n2=factors(j+1);
        while(n2*n1<=n)
        {   j++;
            n1=n2;
            if(results[j+1]==0)
                results[j+1]=factors(j+1);
            n2=results[j+1];
        }
        cout<<(j+1)*j/2<<endl;
    }
    return 0;
}