// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler010
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t, sieve[1000001]={0};
    long long int sums[1000001]={0};
    cin >> t;
    for(int i=2;i<=sqrt(1000001);i++)
        if(sieve[i]==0)
            for(int j=i*i;j<=1000000;j+=i)
                sieve[j]=1;
    for(int i=2;i<=1000000;i++)
        sums[i]=(sieve[i]==0)?i+sums[i-1]:sums[i-1];
    for(int a0 = 0; a0 < t; a0++){
        int n,i;
        cin >> n;
        cout<<sums[n]<<endl;
    }
    return 0;
}