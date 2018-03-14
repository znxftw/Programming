// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler005
#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            return 0;
    return 1;
}
int main(){
    int t;   
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int tot=1;
        for(int i=2;i<=n;++i)
        {
            if(isPrime(i))
                tot*=pow(i,(int)(log(n)/log(i)));
        }
        cout<<tot<<endl;
    }
    return 0;
}